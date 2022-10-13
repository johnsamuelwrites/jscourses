/*
 * Utiliser des variables
 */

#include <stdio.h> // header
#define ANNEE 2022

int main()
{
  printf("Bonjour le monde %i\n", ANNEE);
  ANNEE = 2021;
  printf("Bonjour le monde %i\n", ANNEE);
  return 0;
}
