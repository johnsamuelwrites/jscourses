#include <stdio.h>
#include <stdlib.h>

int main() {
  //char *message;
  int size;
  printf("Quelle est la taille maximum de votre message?");
  scanf("%d", &size);
  char message[size];

//  message = malloc(size * sizeof(char));
  printf("Ecrivez votre message");
  scanf("%s", message);
  printf("Message: %s\n", message);
  printf("sizeof(message): %ld\n", sizeof(message));
  return(0);
}
