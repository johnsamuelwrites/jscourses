#include <stdio.h>
#include <stdlib.h>

int main() {
  int num;
  char numero[30];  

  printf("Excrivez un numero");
  scanf("%s", numero);
  printf("Votre numéro: %d\n", atoi(numero));

  printf("\n");
  return(0);
} 
