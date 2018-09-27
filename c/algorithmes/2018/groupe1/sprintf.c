#include <stdio.h>
#include <string.h>
#include "operators.h"

int main() {
  int num=20;
  char conversion[30];  

  printf("%d", num);
  printf("\n");
  sprintf(conversion, "%d", num);

  printf("%s", conversion);

  printf("\n");
  return(0);
} 
