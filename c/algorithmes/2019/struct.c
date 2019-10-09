/* 
 * structures des données
 */

#include <stdio.h>
#include <string.h>

int main() {
  struct etudiant {
    char nom[30];
    char prenom[30];
    char rue[30];
    int notes[5];
  };

  struct etudiant dupont;
  strcpy(dupont.nom, "Dupont");
  strcpy(dupont.prenom, "Pierre");
  strcpy(dupont.rue, "Rue du pont");
  dupont.notes[0] = 18;
  dupont.notes[1] = 17;

  printf("Nom: %s %s\n", dupont.prenom, dupont.nom);

  return(0);
}
