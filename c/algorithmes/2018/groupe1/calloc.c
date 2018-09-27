#include <stdio.h>
#include <stdlib.h>

int main() {
  char *message;
  int size;
  printf("Quelle est la taille maximum de votre message?");
  scanf("%d", &size);

  message = calloc(size, sizeof(char));
  printf("Ecrivez votre message");
  scanf("%s", message);
  printf("Message: %s\n", message);

  free(message);
  return(0);
}
