/*
 * struct et union
 */

#include <stdio.h>
#include <string.h>

struct etudiant_struct {
   char prenom[30],
        nom[30],
        ville[30],
        rue[30];
};


union etudiant_union {
   char prenom[30],
        nom[30],
        ville[30],
        rue[30];
};

int main() {
  printf("sizeof: etudiant_struct: %lu\n", sizeof(struct etudiant_struct));
  printf("sizeof: etudiant_union: %lu\n", sizeof(union etudiant_union));

  union etudiant_union eu1;
  strcpy(eu1.nom, "Dupont");

  printf("Nom: %s\n", eu1.nom);
  printf("Prénom: %s\n", eu1.prenom);
  printf("Rue: %s\n", eu1.rue);
  printf("Ville: %s\n", eu1.ville);
  return(0);
}

