#include <stdio.h>
#include <string.h>

int main() {
 
  char message[100];

  printf("Tapez votre message: ");
  fgets(message, sizeof(message), stdin);
  message[strlen(message)-1] = '\0';
  printf("Votre message: %s\n", message);

  return(0);
}
