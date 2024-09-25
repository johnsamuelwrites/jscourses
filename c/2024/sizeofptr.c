/*
 * Affiche la taille en octets des types `char`, `int` et `float`, 
 * ainsi que les tailles en octets des pointeurs vers ces types.
 */

#include <stdio.h>

int main() {
    char c = 'a';
    int i = 10;
    float f = 2.34;

    char *cptr = &c;
    int *iptr = &i;
    float *fptr = &f;

    printf("sizeof(c): %zu\n", sizeof(c));
    printf("sizeof(i): %zu\n", sizeof(i));
    printf("sizeof(f): %zu\n", sizeof(f));

    printf("sizeof(cptr): %zu\n", sizeof(cptr));
    printf("sizeof(iptr): %zu\n", sizeof(iptr));
    printf("sizeof(fptr): %zu\n", sizeof(fptr));
}
