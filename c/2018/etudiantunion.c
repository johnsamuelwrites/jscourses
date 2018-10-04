#include <stdio.h>
#include <string.h>

union etudiante {
  char prenom[30];
  char nom[30];
  char rue[30];
  char ville[30];
};

int main() {
  union etudiante dupont;

  strcpy(dupont.nom, "Dupont");

  printf("%s\n", dupont.nom);
  printf("%s\n", dupont.prenom);
  printf("%s\n", dupont.rue);
  printf("%s\n", dupont.ville);

  strcpy(dupont.rue, "Rue Max");
  printf("%s\n", dupont.nom);
  printf("%s\n", dupont.prenom);
  printf("%s\n", dupont.rue);
  printf("%s\n", dupont.ville);

  return(0);
}

