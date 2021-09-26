#include <stdio.h>

/*
 * tableau d'entiers
 */

int main() {
    int itab[20];
    int compteur;

    for(compteur = 0; compteur < 20; compteur++) {
       itab[compteur] = compteur * 2;
    }

    for(compteur = 0; compteur < 20; compteur++) {
       printf("itab[%d]: %d\n",compteur, itab[compteur]);
    }
    return (0);
}
