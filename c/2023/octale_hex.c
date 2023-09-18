/**
 * Ce programme affiche une valeur entière en décimal, octal et hexadécimal.
 */

#include <stdio.h>

int main() {
   int valeur = 32;

   // Affiche la valeur en décimal
   printf("valeur %i\n", valeur);

   // Affiche la valeur en notation octale
   printf("valeur en notation octale %o\n", valeur);

   // Affiche la valeur en notation hexadécimale
   printf("valeur en notation hexadécimale %x\n", valeur);

   return 0;
}

