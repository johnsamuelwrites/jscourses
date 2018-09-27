#include <stdio.h>
#include "operators.h"

int main() {

  int num1 = 20, num2=30;
  int somme = add(num1, num2);
  printf("somme: %d\n", somme);
  printf("somme: %d\n", add(45, 95));
  printf("somme: %d\n", add(450, 95));
  return(0);
} 
