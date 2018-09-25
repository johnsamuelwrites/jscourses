#include <stdio.h>

int main() {
  int i = 255;
  int *iptr = &i;

  printf("%p\n", iptr);
  printf("%p\n", &i);

  printf("%d\n", i);
  printf("%d\n", *iptr);

  printf("%d\n", *&i);

  *iptr = *iptr + 5;
  printf("%d\n", i);
  printf("%d\n", *iptr);

  return(0);
}
