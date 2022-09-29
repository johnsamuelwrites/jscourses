/*
 * Comparaison de strlen, strnlen et sizeof
 */
#include <stdio.h>
#include <string.h>

int main() {
    char nom[50];
    printf("Votre nom: ");
    fgets(nom, sizeof(nom), stdin);
    printf("Taille: %lu\n", strlen(nom));
    printf("sizeof (nom): %lu\n", sizeof(nom));
    printf("Nom: %s\n", nom);

    nom[strlen(nom)-1] = '\0';
    printf("Taille: %lu\n", strnlen(nom, sizeof(nom)));
    printf("sizeof (nom): %lu\n", sizeof(nom));

    printf("Nom: %s\n", nom);

    return(0);

}
