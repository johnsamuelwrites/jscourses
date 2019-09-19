/*
 affiche Bonjour et la valeur d'une variable
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
