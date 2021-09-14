#include <stdio.h>

/*
 * afficher les valeurs des variables de type 
 * 'signé' (signed) et 'non signé' (unsigned).
 */

int main() {
    short annee = 2021;
    printf("Bonjour %d\n", annee);
    
    signed int valeur1 =-234232;
    printf("bonjour %d\n", valeur1);
    
    int valeur2 =-234232;
    printf("bonjour %d\n", valeur2);

    unsigned int valeur3 =-234232;
    printf("bonjour %u\n", valeur3);
    return (0);
}
