/*
 affiche la valeur d'une variable float
 */ 


#include <stdio.h> //header
#include <limits.h>

int main() {
  printf("short min = %d\n", SHRT_MIN);
  printf("short max = %d\n", SHRT_MAX);
  printf("unsigned short min = %d\n", 0);
  printf("unsigend short max = %d\n", USHRT_MAX);

  printf("int min = %d\n", INT_MIN);
  printf("int max = %d\n", INT_MAX);
  printf("unsigned int min = %d\n", 0);
  printf("unsigend int max = %u\n", UINT_MAX);
  return(0);
}
