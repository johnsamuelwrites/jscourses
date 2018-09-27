#include <stdio.h>
#include <string.h>
#include "operators.h"

int main() {

  char message[10];
  printf("Ecrivez votre message\n");
  scanf("%9s", message);

  printf("La taille de votre message:%s est %lu\n", message, strlen(message));
  printf("La taille de votre message:%s est %lu\n", message, strnlen(message, 10));

  return(0);
} 
