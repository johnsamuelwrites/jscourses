#include <stdio.h>

/*
 * les boucles while, do..while
 */

int main() {
    int compteur = 10;

    while ( compteur < 0) {
        printf("Boucle while: Bonjour\n");
    }

    do {
        printf("Boucle do..while 1: Bonjour\n");
    }
    while ( compteur < 0);

    compteur = 0;
    do {
	compteur ++;
	if (compteur > 5) {
	   break;
	}  
        printf("Boucle do..while 2: Bonjour compteur %d\n", compteur);
    }
    while ( compteur < 0);

    return (0);
}
