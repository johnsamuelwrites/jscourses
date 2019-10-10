/*
 * Utilisation de la fonction scanf
 */

#include <stdio.h>

int main() {
  char message[30];
  printf("Votre messsage: ");
  scanf("%29s", message);
  printf("Message: %s\n", message);
  return(0);
}
