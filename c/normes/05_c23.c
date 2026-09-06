#include <stdio.h>

/* C23 : mots-cles, sans stdbool.h, stdalign.h ni assert.h. */
constexpr int limite = 10;
static_assert(limite > 0, "La limite doit etre positive");
static thread_local int compteur = 0;

/* C23 : () est un prototype de fonction sans parametre. */
static int suivant()
{
    /* Chaque thread aurait sa propre instance de compteur. */
    return ++compteur;
}

int main(void)
{
    bool actif = true;
    bool termine = false;
    int *adresse = nullptr;

    printf("Actif : %s ; termine : %s\n",
           actif ? "oui" : "non", termine ? "oui" : "non");
    printf("Pointeur nul : %s\n", adresse == nullptr ? "oui" : "non");
    printf("Limite : %d ; alignement de int : %zu\n", limite, alignof(int));
    printf("Compteur local au thread : %d\n", suivant());
    return 0;
}
