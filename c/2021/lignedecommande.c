#include <stdio.h>

/*
 * utilisation de la ligne de commande 
 */

int main(int argc, char **argv) {
    printf("Compte: %d\n", argc);

    for (int compteur = 0; compteur < argc ; compteur++) {
        printf("%s\n", argv[compteur]);
    }
    return (0);
}
