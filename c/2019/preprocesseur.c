/*
 * Preprocesseur
 */
#include <stdio.h>
#include "preprocesseur.h"
#include "preprocesseur.h" //2eme fois

int carre(int valeur) {
  return valeur * valeur;
}

int main() {
  printf("Bonjour:  %d\n", num);
  printf("Bonjour:  %d\n", square(num));
  printf("Bonjour:  %d\n", carre(num));
  return(0);
}
