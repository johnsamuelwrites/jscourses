/*
 * affiche le valeur de type 'enum'
 */
#include <stdio.h> //en-têtes

int main() {
  enum status {ETUDIANT=1, STAGIAIRE};

  enum status mon_statut = STAGIAIRE;

  printf("Bonjour\n");
  printf("%u\n", mon_statut);
  return(0);
}
