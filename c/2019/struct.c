/*
 * Utilisation de fonctions de la bibliothèque string.h (strcpy)
 */

#include <stdio.h>
#include <string.h>

int main() {
  struct adresse {
    char rue[30];
    char ville[30];
  };
  struct etudiant {
    char nom[30];
    char prenom[30];
    short notes[5];
    struct adresse adresse; 
  };
  struct etudiant dupont;
  strcpy(dupont.nom, "Dupont");
  strcpy(dupont.adresse.ville, "Lyon");
  dupont.notes[0] = 19;
  dupont.notes[1] = 18;

  return(0);
}
