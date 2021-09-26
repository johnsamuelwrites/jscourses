#include <stdio.h>

/*
 * affichage de la valeur d'une variable à l'aide d'un pointeur 
 */

int main() {
    int annee = 2021;
    int *addrannee = &annee;

    printf("addrannee: %p\n", addrannee);
    printf("*addrannee (annee): %d\n", *addrannee);

    short sannee = 2021;
    short *saddrannee = &sannee;

    printf("saddrannee: %p\n", saddrannee);
    printf("*saddrannee(sanne): %hd\n", *saddrannee);
    return (0);
}
