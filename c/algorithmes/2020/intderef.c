/*
 * les pointeurs
 */

#include <stdio.h>

int main() {
  int i = 1;
  int *ptri = &i;

  printf("i: %d\n", i);
  printf("adresse: %p\n", ptri);
  printf("i: %i\n", *ptri);

  *ptri = 2;
  printf("i: %d\n", i);

  *ptri = *ptri + 5;
  printf("i: %d\n", i);

  i = i + 10;
  printf("i: %d\n", i);
  printf("i: %i\n", *ptri);

  return (0);
}
