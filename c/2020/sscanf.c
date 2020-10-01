// L'utilisation de la fonction sscanf
// pour récupérer deux numéros d'une chaîne

#include <stdio.h>
#include <stdlib.h>

int main() {
  char num1str[100] = "23456 98234.56";
  int num1;
  double num2;
  sscanf(num1str, "%d %lg", &num1, &num2);

  printf("%d %lg\n", num1, num2);
  return (0);
}
