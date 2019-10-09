/* 
 * structure dans une structure
 */

#include <stdio.h>
#include <string.h>

int main() {
  struct adresse {
    char rue[30];
    char ville[30];
  };

  typedef struct etudiant {
    char nom[30];
    char prenom[30];
    struct adresse adresse;
    int notes[5];
  } etudiant;

  etudiant dupont;
  strcpy(dupont.nom, "Dupont");
  strcpy(dupont.prenom, "Pierre");
  strcpy(dupont.adresse.rue, "Rue du pont");
  strcpy(dupont.adresse.ville, "Lyon");
  dupont.notes[0] = 18;
  dupont.notes[1] = 17;

  printf("Nom: %s %s\n", dupont.prenom, dupont.nom);

  return(0);
}
