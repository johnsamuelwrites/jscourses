// L'utilisation de la fonction fgets

#include <stdio.h>

int main() {
  char message[100];
  printf("Votre message:\n");
  fgets(message, sizeof(message), stdin);

  printf("Message: %s\n", message);
  return (0);
}
