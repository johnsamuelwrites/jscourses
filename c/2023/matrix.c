/*
 * Ce programme illustre la déclaration, l'initialisation 
 * et l'accès à des tableaux multidimensionnels en langage C.
 */

#include <stdio.h>

int main() {
  // Déclaration et initialisation d'un tableau multidimensionnel 'prix'
  int prix[2][2] = {
    {11, 12},
    {13, 14}
  };

  // Affichage du tableau 'prix'
  printf("Tableau 'prix' avec accolades :\n");
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      printf("%d ", prix[i][j]);
    }
    printf("\n");
  }

  // Déclaration et initialisation d'un tableau multidimensionnel 'prix_sans_accolades'
  int prix_sans_accolades[2][2] = {
    11, 12, 13, 14
  };

  // Affichage du tableau 'prix_sans_accolades'
  printf("\nTableau 'prix_sans_accolades' sans accolades :\n");
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      printf("%d ", prix_sans_accolades[i][j]);
    }
    printf("\n");
  }

  return 0;
}

