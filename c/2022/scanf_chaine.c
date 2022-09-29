/*
 * Utilisation de scanf pour lire une chaîne de caractères 
 * saisie par un utilisateur 
 */

#include <stdio.h>

int main() {
    char nom[50];
    printf("Votre nom: ");
    scanf("%s", nom);

    printf("Nom: %s\n", nom);

    return(0);

}
