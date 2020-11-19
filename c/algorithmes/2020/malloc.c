/*
 * utilisation des fonctions malloc et free 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  char *content;
  
  printf("La taille maximum de votre message? ");
  int taille;
  char numstr[10];
  fgets(numstr, 10, stdin);
  taille = atoi(numstr);

  content = malloc(taille * sizeof(char));
  printf("Votre message? ");
  fgets(content, taille, stdin);
  printf("Votre message: %s", content);

  free(content);

  return (0);
}
