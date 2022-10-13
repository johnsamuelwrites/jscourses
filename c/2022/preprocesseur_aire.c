/*
 * Utiliser des variables
 */

#include <stdio.h> // header
#define carre(valeur) valeur * valeur

int main()
{
  float rayon1 = 34.89;
  float rayon2 = 34.89;
  printf("Aire: %f\n", 3.14 * carre(rayon1));
  printf("Aire: %f\n", 3.14 * carre(rayon2));
  return 0;
}
