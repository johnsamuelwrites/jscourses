#include <stdio.h>

int main() {
  char c = 'h';
  char d = 'b';
  char *cptr;
  cptr = &c;
  printf("c:%c\n", c);
  printf("d:%c\n", d);
  printf("adresse(c):%p\n", &c);
  printf("adresse(c):%p\n", cptr);

  cptr = &d;
  *cptr = 'i';
  printf("c:%c\n", c);
  printf("d:%c\n", d);

  return(0);
}
