#include <stdio.h>

int main() {
  int i = 20;
  int *iptr = &i;

  printf("i: %d\n", i);
  *iptr = 10;
  printf("i: %d\n", i);
  printf("i: %d\n", *iptr);

  printf("i: %d\n", *&i);

  return(0);
}
