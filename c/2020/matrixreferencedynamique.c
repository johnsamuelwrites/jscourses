/*
 * allocation dynamique du mémoire et le passage par référence
 */ 

#include <stdio.h>
#include <stdlib.h>

void affichage (int **tableau, int lignes, int colonnes) {
  for (int i =0 ; i< lignes; i++ ) {
    for (int j = 0 ; j< colonnes; j++ ) {
      printf("%3d ", tableau[i][j]);
    }
    printf("\n");
  }
}


int main() {  
  int **prix, lignes = 2, colonnes = 10;
  prix = calloc (sizeof(int *), lignes);

  for (int i =0 ; i< lignes; i++ ) {
    prix[i] = calloc (sizeof(int), colonnes);
  }

  for (int i =0 ; i< lignes; i++ ) {
    for (int j = 0 ; j< colonnes; j++ ) {
      prix[i][j] = i + j;
    }
  }

  affichage(prix, lignes, colonnes);

  for (int i =0 ; i< lignes; i++ ) {
    free(prix[i]);
  }
  free(prix);

  return (0);
}
