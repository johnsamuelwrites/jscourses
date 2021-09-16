#include <stdio.h>

/*
 * utilisation de 'continue' dans une boucle 
 */

int main() {
    int compteur;

    for ( compteur = 0; compteur < 10; compteur++) {
	if (compteur % 2) {
	    continue;
	}
        printf("boucle 1: %d\n", compteur);
    }
    for ( compteur = 0; compteur < 10; compteur++) {
	if (compteur % 2) {
	    break;
	}
        printf("boucle 2: %d\n", compteur);
    }
    return (0);
}
