#include <stdio.h>

/*
 * tableau d'entiers, son initialisation et l'affichage des éléments 
 */

int main() {
    int itab[] = {10, 11, 12, 13, 14, 15, 16, 12, 123, 89};
    printf("sizeof(itab): %lu\n", sizeof(itab));

    for(int compteur = 0; compteur < sizeof(itab)/sizeof(int); compteur++) {
       printf("itab[%d]: %d\n",compteur, itab[compteur]);
    }

    return (0);
}
