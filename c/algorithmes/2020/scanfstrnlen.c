/*
 * utilisation de la fonction strnlen
 */

#include <stdio.h>
#include <string.h>

int main() { 
  char message[10];

  printf("Votre message: ");
  scanf("%9s", message);

  printf("message: %s, taille: %ld\n", message, strnlen(message, sizeof(message)));
  return (0);
}
