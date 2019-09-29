/*
 * affiche bonjour et la valeur d'une variable
 */
#include <stdio.h> //en-têtes

int main() {
  char c = 'A';
  printf("Bonjour\n");
  printf("%c\n", c);
  c =  98;
  printf("%c\n", c);
  return(0);
}
