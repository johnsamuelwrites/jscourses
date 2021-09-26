#include <stdio.h>

/*
 * tableau d'entiers, son initialisation, sa modification et l'affichage des éléments 
 */

int main() {
    int itab[5] = {10, 11, 12, 13, 14, 15, 16};

    for(int compteur = 0; compteur < 5; compteur++) {
       printf("itab[%d]: %d\n",compteur, itab[compteur]);
    }
    itab[0] = 20;
    itab[1] = 31;
    itab[2] = 42;
    itab[3] = 13;
    itab[4] = 14;
    for(int compteur = 0; compteur < 5; compteur++) {
       printf("itab[%d]: %d\n",compteur, itab[compteur]);
    }

    return (0);
}
