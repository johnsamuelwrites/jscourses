// L'utilisation de la fonction fgets 
// et le remplacement du dernier caractère par un NULL

#include <stdio.h>
#include <string.h>

int main() {
  char message[10];
  printf("Votre message:\n");
  fgets(message, sizeof(message), stdin);

  printf("taille: %ld\n", strlen(message));
  message[strlen(message) - 1 ] = '\0';

  printf("Message: %s\n", message);
  return (0);
}
