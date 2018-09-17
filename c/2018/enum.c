/*
 affiche la valeur d'une variable float
 */ 


#include <stdio.h> //header

int main() {
  enum BOOL {FAUX=0, VRAI=1};
  //enum STATUT {STAGIARE = 0, ETUDIANTE = 1, ENSEIGNANT = 2};
  enum STATUT {STAGIARE, ETUDIANTE=11, ENSEIGNANT};
  enum BOOL b = FAUX;

  enum STATUT s = ENSEIGNANT;
  enum STATUT s2 = 10; //jamais
  printf("b= %d, s=%d\n", b, s);
  return(0);
}
