/*
 * Ce programme a pour objectif de démontrer comment déclarer, 
 * initialiser et afficher un tableau multidimensionnel de caractères en C.
 */

#include <stdio.h>

int main() {
  // Déclaration d'un tableau multidimensionnel 'message' de taille 2x11
  char message[2][11] = {"Bonjour", "Le monde"};

  // Affichage du tableau 'message' caractère par caractère
  printf("Affichage caractère par caractère :\n");
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 11; j++) {
      printf("%c", message[i][j]);
    }
    printf("\n");
  }

  // Affichage du tableau 'message' en tant que chaînes de caractères
  printf("\nAffichage en tant que chaînes de caractères :\n");
  for(int i = 0; i < 2; i++) {
    printf("%s\n", message[i]);
  }

  return 0;
}

