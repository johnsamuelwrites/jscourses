/*
 affiche la somme
 */ 


#include <stdio.h> //header

int main() {
  char nom[30], prenom[30];
  printf("Tapez votre prénom: ");
  scanf("%s", prenom);
  printf("Tapez votre nom: ");
  scanf("%s", nom);
  printf("Nom : %s %s\n", prenom, nom);
  return(0);
}
