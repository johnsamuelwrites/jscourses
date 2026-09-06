#include <stdio.h>

/* Les threads et les types atomiques sont optionnels en C11/C17. */
#if defined(__STDC_NO_THREADS__) || defined(__STDC_NO_ATOMICS__)
int main(void)
{
    puts("Threads ou types atomiques non disponibles sur cette implementation.");
    return 0;
}
#else
#include <stdatomic.h>
#include <threads.h>

static atomic_int compteur = ATOMIC_VAR_INIT(0);

static int compter(void *argument)
{
    (void)argument;
    for (int i = 0; i < 10000; ++i) {
        /* Increment atomique : les deux threads partagent le compteur. */
        atomic_fetch_add(&compteur, 1);
    }
    return 0;
}

int main(void)
{
    thrd_t travailleur;
    if (thrd_create(&travailleur, compter, NULL) != thrd_success) {
        fputs("Impossible de creer le thread.\n", stderr);
        return 1;
    }
    compter(NULL);
    if (thrd_join(travailleur, NULL) != thrd_success) {
        fputs("Impossible d'attendre le thread.\n", stderr);
        return 1;
    }
    printf("Compteur : %d (attendu : 20000)\n", atomic_load(&compteur));
    return 0;
}
#endif
