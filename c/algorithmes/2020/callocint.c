/*
 * utilisation des fonctions calloc et free 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int *content;
  
  printf("Les nombres d'entiers? ");
  int taille;
  char numstr[10];
  fgets(numstr, 10, stdin);
  taille = atoi(numstr);

  content = calloc(sizeof(int), taille);
  for (int i = 0; i < taille; i++) {
    printf("Numéro %d? ", i);
    fgets(numstr, 10, stdin);
    content[i] = atoi(numstr);
  }

  for (int i = 0; i < taille; i++) {
    printf("Numéro %d: %d\n", i, content[i]);
  }

  free(content);

  return (0);
}
