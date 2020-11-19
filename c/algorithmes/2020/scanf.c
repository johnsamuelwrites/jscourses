/*
 * utilisation de la fonction scanf
 */

#include <stdio.h>

int main() { 
  int num1;
  char message[100];
  printf("Numéro 1\n");
  scanf("%d", &num1);

  printf("Numéro 1: %d %p\n", num1, &num1);

  printf("Votre message\n");
  scanf("%s", &message[0]);
  printf("message: %s\n", message);

  scanf("%s", message);
  printf("message: %s\n", message);
  return (0);
}
