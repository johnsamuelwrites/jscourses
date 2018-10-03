/*
 affiche la somme
 */ 


#include <stdio.h> //header

int main() {
  int num1, num2, somme;
  printf("Tapez numéro 1: ");
  scanf("%d", &num1);
  printf("Tapez numéro 2: ");
  scanf("%d", &num2);
  somme  = num1 + num2;
  printf("La somme: %d\n", num1 + num2);
  return(0);
}
