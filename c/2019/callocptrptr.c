/*
 * Allocation dynamique de mémoire
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
  int taille;
  char **mots;
  int i;

  printf("Combien de mots? :");
  scanf("%d", &taille);

  mots = calloc(taille, sizeof(char *));
  for(i=0; i<taille;i++) {
    int taillemot;
    printf("La taille de mot %d :", (i+1));
    scanf("%d", &taillemot);
    mots[i] = calloc(taillemot, sizeof(char));
    scanf("%s", mots[i]);
  }
  for(i=0; i<taille;i++) {
    printf("%s\n", mots[i]);
  }

  for(i=0; i<taille;i++) {
    free(mots[i]);
  }

  free(mots);
  return(0);
}
