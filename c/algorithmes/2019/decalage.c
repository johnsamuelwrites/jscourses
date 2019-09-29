/*
 * affiche les valeurs modifiées en utilisant les opérateurs
 * de décalage
 */
#include <stdio.h> //en-têtes

int main() {
  int a = 0b010;
  printf("Bonjour %d\n", a);
  a = a << 1;
  printf("Bonjour %d\n", a);
  a = a << 1;
  printf("Bonjour %d\n", a);
  a <<= 1;
  printf("Bonjour %d\n", a);
  a <<= 1;
  printf("Bonjour %d\n", a);
  return(0);
}
