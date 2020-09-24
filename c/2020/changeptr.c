// Les pointeurs et les opérations

#include <stdio.h>

int main() { 
  char c = 'a';
  char *cptr = &c;
  printf("Bonjour %c\n", c);
  printf("Bonjour %p\n", cptr);
  printf("Bonjour %c\n", *cptr);

  c = 'b';
  printf("Bonjour %c\n", c);

  *cptr = 'e';
  printf("Bonjour %c\n", c);
  printf("Bonjour %c\n", *cptr);
  return (0);
}
