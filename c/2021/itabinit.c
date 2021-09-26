#include <stdio.h>

/*
 * tableau d'entiers et son initialisation
 */

int main() {
    int itab[5] = {10, 11, 12, 13, 14};
    int compteur;

    for(compteur = 0; compteur < 5; compteur++) {
       printf("itab[%d]: %d\n",compteur, itab[compteur]);
    }
    return (0);
}
