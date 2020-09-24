// L'opérateur de déréférencement

#include <stdio.h>

int main() { 
  char c = 'a';
  char *cptr = &c;
  printf("Bonjour %c\n", c);
  printf("Bonjour %p\n", cptr);
  printf("Bonjour %c\n", *cptr);

  int i = 0xab68;
  int *iptr = &i;
  printf("Bonjour %x\n", i);
  printf("Bonjour %p\n", iptr);
  printf("Bonjour %x\n", *iptr);
  return (0);
}
