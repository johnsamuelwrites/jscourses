#include <stdio.h>
#include <string.h>

int main() {
  typedef short entier;

  struct adresse {
    char rue[30];
    char ville[30];
  };
  typedef struct etudiant {
    char nom[30];
    char prenom[30];
    entier notes[5];
    struct adresse adresse; 
  } etudiant;

  typedef enum bool {FALSE, TRUE} bool;
  etudiant dupont;
  strcpy(dupont.nom, "Dupont");
  strcpy(dupont.adresse.ville, "Lyon");
  dupont.notes[0] = 19;
  dupont.notes[1] = 18;

  return(0);
}
