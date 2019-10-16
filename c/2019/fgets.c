/*
 * Utilisation de fgets 
 */

#include <stdio.h>

int main() {
  char message[50];
  printf("Tapez votre message: \n");
  
  fgets(message, sizeof(message), stdin);
  printf("message: %s\n", message);

  return(0);
}
