#include <stdio.h>

int main() {
  char c = 'h';
  char *cptr
  cptr = &c;
  printf("c:%c\n", c);
  printf("adresse(c):%p\n", &c);
  printf("adresse(c):%p\n", cptr);

  c= 'b';
  printf("c:%c\n", c);

  *cptr = 'd';
  printf("c:%c\n", c);

  return(0);
}
