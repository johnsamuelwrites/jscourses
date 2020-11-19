/*
 * utilisation de la fonction strlen
 */

#include <stdio.h>
#include <string.h>

int main() { 
  char message[10];

  printf("Votre message: ");
  scanf("%s", message);
  printf("message: %s, taille: %ld\n", message, strlen(message));
  return (0);
}
