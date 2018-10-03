/*
 affiche la somme
 */ 


#include <stdio.h> //header

int main() {
  char nom[30], prenom[30];
  printf("Tapez votre prénom: ");
  scanf("%30s", prenom);
  fflush(stdin);
  printf("Tapez votre nom: ");
  scanf("%30s", nom);
  printf("Nom : %s %s\n", prenom, nom);
  return(0);
}
