/*
 * Utilisation de la fonction strlen et la comparaison de résultat avec sizeof
 */


#include <stdio.h>
#include <string.h>

int main() {
  char message[100] = "Bonjour le monde";
  char *message2 = "Pierre";
  printf("strlen(message): %ld\n", strlen(message));
  printf("size(message): %ld\n\n", sizeof(message));

  printf("addr: %p\n", message2);
  printf("strlen(message2): %ld\n", strlen(message2));
  printf("size(message2): %ld\n", sizeof(message2));
  return(0);
}
