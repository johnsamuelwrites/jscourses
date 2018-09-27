#include "print.h"
#include <stdio.h>
#include <string.h>

void print(char * string, int taille) {
  for (int i=0; i< taille; i++) {
    printf("%c", string[i]);
  }
  printf("\n");
}

void print2(char * string) {
  for (int i=0; i< strlen(string); i++) {
    printf("%c", string[i]);
  }
  printf("\n");
}
