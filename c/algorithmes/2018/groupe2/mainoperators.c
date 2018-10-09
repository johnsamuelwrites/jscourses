#include <stdio.h>
#include "operators.h"

int main() {
  int num1 = 10, num2 = 20;

  int somme = add(num1, num2);

  printf("somme: %d\n", somme);
  return(0);
}
