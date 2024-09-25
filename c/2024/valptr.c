/*
 * Utilisation de pointeurs pour stocker les adresses mémoire des variables,
 * puis pour accéder et afficher leurs valeurs.
 */

#include <stdio.h>

int main() {
    char c = 'a';
    int i = 10;
    float f = 2.34;

    char *cptr = &c;
    int *iptr = &i;
    float *fptr = &f;

    printf("c: %c\n", c);
    printf("i: %i\n", i);
    printf("f: %f\n", f);

    printf("c: %c\n", *cptr);
    printf("i: %i\n", *iptr);
    printf("f: %f\n", *fptr);
}
