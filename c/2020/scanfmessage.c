// L'utilisation de scanf

#include <stdio.h>

int main() {
  char message[100];
  printf("Votre message:\n");
  scanf("%s", message);

  printf("Message: %s\n", message);
  return (0);
}
