#include<stdio.h>
#include <stdlib.h>

int main() {
  char *message;
  int taille;

  printf("Taille maximum de votre message");
  scanf("%d", &taille);

  message = calloc (taille, sizeof(char));
  if (message == NULL) {
    printf("Memoire insuffisante\n");
    exit(1);
  }

  printf("Tapez votre message"); 
  scanf("%s", message);
  printf("%s\n", message);

  free(message);
  
  return(0);
}
