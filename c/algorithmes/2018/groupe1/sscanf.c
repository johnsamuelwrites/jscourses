#include <stdio.h>

int main() {
  int num1, num2;
  float num3;
  char numeros[30] = "20;30;30.44";
  sscanf(numeros, "%d;%d;%f", &num1, &num2, &num3);
  printf("Les numeros: %d,%d,%f\n", num1, num2, num3);

  return(0);
} 
