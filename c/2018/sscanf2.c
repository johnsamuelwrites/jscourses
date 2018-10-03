#include <stdio.h> //header
#include <stdlib.h>

int main() {
 
  char numstr[] = "Dupont ; Pierre ; RueMax ; Villeurbanne ; 1";
  char nom[20];
  char prenom[20];
  char rue[20];
  char ville[20];
  int notes;

  sscanf(numstr, "%s ; %s ; %s ; %s ; %d", nom, prenom, rue, ville, &notes);

  printf("Details: Nom: %s %s\nRue: %s\n Ville: %s\nNotes: %d", nom,
    prenom, rue, ville, notes);

  return(0);
}
