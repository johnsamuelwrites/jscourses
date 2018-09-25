#include <stdio.h>

int main() {
  int num1, num2;
  num1 = 20;
  num2 = 10;

  int valeur = 0;

  valeur += num1;
  printf("la somme: %d\n", valeur);

  valeur -= num1;
  printf("la différence: %d\n", valeur);

  valeur *= num2;
  printf("multiplication: %d\n", valeur);

  valeur /= num2;
  printf("division: %d\n", valeur);

  valeur %=num2;
  printf("modulus: %d\n", valeur);

  printf("num1: %d\n", num1);
  printf("num2: %d\n", num2);
  
  
  return(0);
}
