/*
 * Allocation dynamique de mémoire
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int taille;
  int *tab;
  int i;

  printf("Combien d'entiers? :");
  scanf("%d", &taille);

  tab = calloc(taille, sizeof(int));
  for(i=0; i<taille;i++) {
    printf("%d\n", tab[i]);
  }
  if (tab == NULL) {
    printf("problème de malloc\n");
    return(0);
  }
  for(i=0; i<taille;i++) {
    printf("Numero %d :", (i+1));
    scanf("%d", &tab[i]);
  }
  for(i=0; i<taille;i++) {
    printf("%d\n", tab[i]);
  }

  free(tab);
  return(0);
}
