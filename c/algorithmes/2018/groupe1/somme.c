#include <stdio.h>
#include "operators.h"

int main() {

  int num1, num2;
  float num3;
  char message[10];
  printf("Tapez numéro 1\n");
  scanf("%d", &num1);
  printf("Tapez numéro 2\n");
  scanf("%d", &num2);
  printf("La somme: %d\n", add(num1, num2));

  printf("Tapez numéro 3\n");
  scanf("%f", &num3);

  printf("Ecrivez votre message\n");
  scanf("%s", message);

  printf("Numéro 3: %f\nMessage:%s\n", num3, message);

  return(0);
} 
