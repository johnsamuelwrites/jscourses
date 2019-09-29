/*
 * affiche bonjour et la valeur d'une variable de type 'enum'
 */
#include <stdio.h> //en-têtes

int main() {
  enum status {ETUDIANT, STAGIAIRE};

  enum status mon_statut = ETUDIANT;

  printf("Bonjour\n");
  printf("%u\n", mon_statut);
  return(0);
}
