#include <stdio.h>

/*
 * pointeurs génériques (void *)
 */

int main() {
    char a = 'm';
    void *vptr = &a;
    
    printf("Bonjour %c\n", (* (char* )vptr));
    
    int annee = 2021;
    vptr = &annee;

    printf("Bonjour %d\n", (*(int *)vptr));

    float pi = 3.14;
    vptr = &pi;

    printf("Bonjour %f\n", (*(float *)vptr));

    // pas d'erreur
    vptr = &annee;
    printf("Bonjour %c\n", (*(char *)vptr));
    return (0);
}
