// L'utilisation de scanf en précisant la taille
// maximum d'une chaîne

#include <stdio.h>

int main() {
  char message[10];
  printf("Votre message:\n");
  scanf("%9s", message);

  printf("Message: %s\n", message);
  return (0);
}
