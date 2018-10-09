#include <stdio.h>
#include <string.h>

int main() {
 
  char message[10];

  printf("Tapez votre message: ");
  scanf("%9s", message);
  printf("Taille(message): %ld\n", sizeof(message));
  printf("Taille(message): %lu\n", strlen(message));
  printf("Taille(message): %lu\n", strnlen(message, sizeof(message)));

  return(0);
}
