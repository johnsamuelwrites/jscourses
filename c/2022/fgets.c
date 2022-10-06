
/*
 * Utilisation de fgets pour lire une chaîne de caractères
 * saisie par un utilisateur
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char nom[50];
    printf("Votre nom: ");
    fgets(nom, sizeof(nom), stdin);

    nom[strlen(nom) - 1] = '\0';

    printf("Nom: %s\n", nom);

    return (0);
}
