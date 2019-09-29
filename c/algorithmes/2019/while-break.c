/*
 * while..break
 */
#include <stdio.h> //en-têtes

int main() {
  int a = 0;
  while (a < 10) {
    printf("%d\n", a);
    a++;
  }
  printf("deuxième while \n");
  a = 1;
  while (a < 10) {
    printf("%d\n", a);
    if( a % 5 == 0) {
      break;
    }
    a++;
  }
/*  printf("troisième while \n");
  a = 1;
  while (a < 10) {
    printf("%d\n", a);
    if( a % 5 == 0) {
      continue;
    }
    a++;
  } */
  printf("4ème while \n");
  a = 1;
  while (a < 10) {
    printf("%d\n", a);
    a++;
    if( a % 5 == 0) {
      continue;
    }
  }
  return(0);
}
