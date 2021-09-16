#include <stdio.h>

/*
 * boucle for (initialisation; condition, actualisation) 
 */

int main() {
    int compteur;

    for (compteur = 0; compteur < 5; compteur++) {
        printf("Boucle 1, compteur %d\n", compteur);
    }

    for (compteur = 0; compteur > 5; compteur++) {
        printf("Boucle 2, compteur %d\n", compteur);
    }

    for (; compteur < 5; compteur++) {
        printf("Boucle 3, compteur %d\n", compteur);
    }
    
    for (; compteur < 5; ) {
        printf("Boucle 4, compteur %d\n", compteur);
    }
    return (0);
}
