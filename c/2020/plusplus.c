// affiche bonjour et la valeur d'une variable en utilisant 
// ++, --

/* affiche la valeur
 * auteur: John Samuel
 * Commentaires
 */ 

#include <stdio.h>

int main() {
  int annee = 2020;
  printf("Bonjour %d\n", annee++);
  printf("Bonjour %d\n", ++annee);
  printf("Bonjour %d\n", --annee);
  printf("Bonjour %d\n", annee--);
  return (0);
}
