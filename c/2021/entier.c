#include <stdio.h>

/*
 * utilisation de typedef 
 */

int main() {
    typedef int entier;
    typedef char caractere;

    entier annee = 2021;
    caractere a = 'c';

    int code = 123;
    printf("Bonjour %d\n", annee);
    return (0);
}
