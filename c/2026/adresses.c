#include <stdio.h>

int main() {
    char c = 'A';
    printf("c: %c\n", c);

    char *cptr = &c;
    printf("adresse de c: %p\n", cptr);
    printf("valeur stockée à cptr: %c\n", *cptr);

    int entier = 34;
    int *iptr = &entier;
    printf("entier :%i, adresse d'entier: %p\n", entier, (void*)iptr);
    printf("valeur stockée à iptr: %i\n", *iptr);

    float pi = 3.14;
    float *fptr = &pi;
    printf("pi :%f, adresse de pi: %p\n", pi, (void*)fptr);
    printf("valeur stockée à fptr: %f\n", *fptr);

    double dpi = 34.23;
    double *dptr = &dpi;
    printf("dpi :%f, adresse de dpi: %p\n", pi, (void*)dptr);
    printf("valeur stockée à dptr: %f\n", *dptr);

    dpi = *dptr + 2;
    printf("dpi :%f, adresse de dpi: %p\n", pi, (void*)dptr);
    printf("valeur stockée à dptr: %f\n", *dptr);

    *dptr = *dptr + 2;
    printf("dpi :%f, adresse de dpi: %p\n", pi, (void*)dptr);
    printf("valeur stockée à dptr: %f\n", *dptr);
    return (0);
}