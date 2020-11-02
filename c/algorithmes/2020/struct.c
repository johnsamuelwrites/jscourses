/*
 * les structures de données
 */

#include <stdio.h>
#include <string.h>

struct adresse {
  char rue[30];
  char ville[30];
};

typedef struct {
  char nom[30];
  char prenom[30];
  struct adresse adresse;
  int notes;
} etudiant;

int main() {
  etudiant dupont;

  strcpy(dupont.nom, "Dupont");
  strcpy(dupont.prenom, "Pierre");
  strcpy(dupont.adresse.rue, "Boulevard du 11 novembre 1918");
  strcpy(dupont.adresse.ville, "Villeurbanne");
  dupont.notes = 18;

  printf("Bonjour %s %s: vos notes: %d\n", dupont.nom, dupont.prenom, dupont.notes);
  printf("Adresse %s %s:\n", dupont.adresse.rue, dupont.adresse.ville);
  return (0);
}
