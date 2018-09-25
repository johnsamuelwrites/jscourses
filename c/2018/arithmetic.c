#include <stdio.h>

int main() {
  int num1, num2;
  num1 = 20;
  num2 = 10;

  int valeur = 0;

  valeur = num1 + num2;
  printf("la somme: %d\n", valeur);
  printf("la différence: %d\n", num1 - num2);

  valeur = num1 * num2;
  printf("multiplication: %d\n", valeur);

  valeur = num1 / num2;
  printf("division: %d\n", valeur);

  valeur = num1 % num2;
  printf("modulus: %d\n", valeur);
  
  return(0);
}
