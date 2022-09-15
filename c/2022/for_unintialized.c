/*
 * Comportement d'un compteur unitialisé
 */

#include <stdio.h>

int main()
{

  int compteur;

  for (compteur = 0; compteur < 10; compteur++)
  {
    printf("1. compteur: %d\n", compteur);
  }

  return 0;
}
