/*
 * affiche la taille de différents types de variables
 */
#include <stdio.h> //en-têtes
#include <limits.h> //en-têtes

int main() {
  printf("unsigned char: %ld", sizeof(unsigned char));
  printf("signed char: %ld\n", sizeof(signed char));
  printf("unsigned short: %ld\n", sizeof(unsigned short));
  printf("signed short: %ld\n", sizeof(signed short));
  return(0);
}
