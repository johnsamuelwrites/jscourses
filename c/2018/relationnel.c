#include <stdio.h>

int main() {
  int num1, num2;
  num1 = 10;
  num2 = 10;

  int valeur = 0;

  valeur = num1 < num2;
  printf("inferieur: %d\n", valeur);

  valeur = num1 > num2;
  printf("superieur: %d\n", valeur);
  
  valeur = num1 >= num2;
  printf("superieur ou egale: %d\n", valeur);

  valeur = num1 <= num2;
  printf("inferieur ou egale: %d\n", valeur);

  valeur = num1 == num2;
  printf("egale: %d\n", valeur);

  valeur = num1 != num2;
  printf("different: %d\n", valeur);
  return(0);
}
