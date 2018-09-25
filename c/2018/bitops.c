#include <stdio.h>

int main() {
  int num1, num2;
  num1 = 10;
  num2 = 10;

  int valeur = num1 & num2;
  printf("ET: %d\n", valeur);

  valeur = num1 | num2;
  printf("OU: %d\n", valeur);

  num1 = 10;
  num2 = 0;

  valeur = num1 & num2;
  printf("ET: %d\n", valeur);

  valeur = num1 | num2;
  printf("OU: %d\n", valeur);

  num1 = 0;
  num2 = 10;

  valeur = num1 & num2;
  printf("ET: %d\n", valeur);

  valeur = num1 | num2;
  printf("OU: %d\n", valeur);

  valeur = ~num1;
  printf("negation: %x\n", valeur);

  valeur = ~num2;
  printf("negation: %x\n", valeur);
  return(0);
}
