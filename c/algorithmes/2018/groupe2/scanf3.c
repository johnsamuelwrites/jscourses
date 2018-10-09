#include <stdio.h>

int main() {
 
  char message[10];

  printf("Tapez votre message: ");
  scanf("%9s", message);
  printf("Votre message: %s\n", message);

  return(0);
}
