// affiche bonjour et la valeur d'une variable en utilisant +=

/* affiche la valeur
 * auteur: John Samuel
 * Commentaires
 */ 

#include <stdio.h>

int main() {
  int annee = 2020;
  annee = annee + 10;
  printf("Bonjour %d\n", annee);

  annee += 20;
  printf("Bonjour %d\n", annee);

  annee += 20;
  printf("Bonjour %d\n", annee);
  return (0);
}
