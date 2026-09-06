#include <stdalign.h>
#include <stdio.h>

/* En C11, _Static_assert est un mot-cle (static_assert est une macro
   fournie par assert.h). Cette verification se fait a la compilation. */
_Static_assert(sizeof(int) >= 2, "int doit occuper au moins deux octets C");

int main(void)
{
    /* alignas et alignof sont des macros de stdalign.h en C11. */
    alignas(int) unsigned char tampon[sizeof(int)];
    printf("Alignement de int : %zu\n", alignof(int));
    printf("Taille du tampon : %zu\n", sizeof tampon);
    return 0;
}
