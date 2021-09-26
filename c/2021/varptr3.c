#include <stdio.h>

/*
 * modification et affichage de la valeur d'une variable à l'aide d'un pointeur 
 */

int main() {
    int annee = 2021;
    int *addrannee = &annee;

    printf("addrannee: %p\n", addrannee);
    printf("*addrannee (annee): %d\n", *addrannee);

    *addrannee = 2022;
    printf("*addrannee (annee): %d\n", *addrannee);
    printf("annee: %d\n", annee);
    
    annee = 2020;
    printf("*addrannee (annee): %d\n", *addrannee);
    printf("annee: %d\n", annee);

    return (0);
}
