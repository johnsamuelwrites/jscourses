/*
 * Affiche Bonjour et les valeurs de deux variables
 * en utilisant l'espace et le caractère de tabulation
 */

#include <stdio.h>

int main() {
  int annee1 = 2019;
  int annee2 = 2020;
  printf("Bonjour %i %i\n", annee1, annee2);
  printf("Bonjour %i\t%i\n", annee1, annee2);
  printf("Bonjour %i\t\t%i\n", annee1, annee2);
  return(0);
}
