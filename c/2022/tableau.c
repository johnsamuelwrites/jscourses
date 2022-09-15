/*
 * Les tableaux
 */

#include <stdio.h>

int main()
{

  int compteur = 0;

  int tableau[20];

  for (compteur = 0; compteur < 20; compteur++)
  { // initialisation
    tableau[compteur] = compteur;
  }

  for (compteur = 0; compteur < 20; compteur++)
  { // affichage
    printf("tableau[%d]: %d\n", compteur, tableau[compteur]);
  }

  return 0;
}
