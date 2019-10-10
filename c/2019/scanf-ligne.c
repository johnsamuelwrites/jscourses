/*
 * Utilisation de la fonction scanf 
 */

#include <stdio.h>

int main() {
  int num1, num2;
  printf("Numéro 1 et 2: ");
  scanf("%d %d", &num1, &num2);
  printf("La somme: %d\n", num1 + num2);
  return(0);
}
