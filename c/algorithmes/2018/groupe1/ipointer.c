#include <stdio.h>

int main() {
  int i = 255;
  int *iptr = &i;

  printf("%p\n", iptr);
  printf("%p\n", &i);

  printf("%d\n", i);
  printf("%d\n", *iptr);

  printf("%d\n", *&i);
  return(0);
}
