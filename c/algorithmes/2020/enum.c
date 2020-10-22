/*
 * des variables
 */

#include <stdio.h>

int main() {
  enum status {ETUDIANT, STAGIAIRE};
  enum status evar = STAGIAIRE;

  printf("Bonjour %d\n", evar);

  enum status2 {ETUDIANT2=4, STAGIAIRE2};
  enum status2 evar2 = STAGIAIRE2;
  printf("Bonjour %d\n", evar2);
  return (0);
}
