#include <stdio.h>
#include <string.h>

struct etudiante {
  char prenom[30];
  char nom[30];
  char rue[30];
  char ville[30];
  int notes_tp[6];
  int notes_ds[2];
};

int main() {
  struct etudiante dupont;

  strcpy(dupont.nom, "Dupont");
  strcpy(dupont.prenom, "Pierre");
  strcpy(dupont.rue, "Rue Max");
  strcpy(dupont.ville, "Villeurbanne");
  dupont.notes_tp[0] = 1;
  dupont.notes_tp[1] = 3;
  dupont.notes_tp[2] = 3;
  dupont.notes_tp[3] = 4;
  dupont.notes_tp[4] = 4;
  dupont.notes_tp[5] = 5;
  dupont.notes_ds[0] = 18;
  dupont.notes_ds[1] = 0;

  printf("%s\n", dupont.nom);

  return(0);
}

