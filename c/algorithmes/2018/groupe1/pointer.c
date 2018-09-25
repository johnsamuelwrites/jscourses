#include <stdio.h>

int main() {
  char c = 'h';
  char *cptr = &c;

  printf("%p\n", cptr);
  printf("%p\n", &c);

  printf("%c\n", c);
  printf("%c\n", *cptr);
  return(0);
}
