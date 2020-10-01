// L'utilisation des fonctions atoi et atof

#include <stdio.h>
#include <stdlib.h>

int main() {
  char num1str[10] = "23456";
  char num2str[10] = "98234.56";

  int num1 = atoi(num1str);
  double num2 = atof(num2str);


  printf("%d %g\n", num1, num2);
  return (0);
}
