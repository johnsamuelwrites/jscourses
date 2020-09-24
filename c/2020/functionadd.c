// fonctions: prototype et l'implémentation

#include <stdio.h>

int add (int, int);

int add (int num1, int num2) {
  int num3 = num1 + num2;
  return num3;
}

int main() {

  printf("34+45: %d\n", add(34, 45));
  return(0);
}
