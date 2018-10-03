/*
 affiche la somme
 */ 


#include <stdio.h> //header
#include <string.h>

int main() {
  char nom[30], prenom[30];
  printf("Tapez votre prénom: ");
  scanf("%s", prenom);
  printf("Tapez votre nom: ");
  scanf("%s", nom);
  printf("Nom : %s %s\n", prenom, nom);
  printf("sizeof(Nom) : %lu %lu\n", sizeof(prenom), sizeof(nom));
  printf("sizeof(Nom) : %lu %lu\n", strlen(prenom), strlen(nom));
  prenom[strlen(prenom)] = 'h';
  nom[strlen(nom)] = 'h';
  printf("sizeof(Nom) : %lu %lu\n", strlen(prenom), strlen(nom));
  prenom[strlen(prenom)-1] = '\0';
  nom[strlen(nom)-1] = (char)NULL;
 printf("sizeof(Nom) : %lu %lu\n", strnlen(prenom, sizeof(prenom)), strnlen(nom, sizeof(nom)));
  return(0);
}
