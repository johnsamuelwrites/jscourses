// affiche bonjour et la valeur d'une variable

/* affiche la valeur
 * auteur: John Samuel
 * Commentaires
 */ 

#include <stdio.h>

int main() {
  int valeur = 2;
  valeur = valeur << 1;
  printf("valeur %d\n", valeur);
  valeur = valeur << 1;
  printf("valeur %d\n", valeur);

  printf("valeur %d\n", valeur << 1);

  valeur = 9;
  valeur = valeur >> 1;
  printf("valeur %d\n", valeur);
  return (0);
}
