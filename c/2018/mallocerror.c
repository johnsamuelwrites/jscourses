#include<stdio.h>
#include <stdlib.h>

//ERREUR

int main() {
  char *message;

  printf("Tapez votre message"); 
  scanf("%s", message);
  printf("%s\n", message);

  return(0);
}
