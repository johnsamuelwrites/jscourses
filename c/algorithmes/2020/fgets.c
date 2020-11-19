/*
 * utilisation de la fonction fgets
 * pour interagir avec l'utilisateur
 */

#include <stdio.h>

int main() { 
  char message[100];

  printf("Votre message: ");
  fgets(message, sizeof(message), stdin);
  printf("message: %s\n", message);
  return (0);
}
