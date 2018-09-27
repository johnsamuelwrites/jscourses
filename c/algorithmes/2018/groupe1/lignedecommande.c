#include <stdio.h>
#include <stdlib.h>
#include "operators.h"

int main(int argc, char **argv) {

  printf("Nombre d'arguments: %d\n", argc);
  printf("1ere argument: %s\n", argv[0]);
  
  if(argc <3) {
    printf("usage: prog arg1 arg2...\n");
    exit(1);
  }
  
  for (int i=1; i< argc; i++) {
    printf("Argument %i: %s\n", i, argv[i]);
  }
  return(0);
} 
