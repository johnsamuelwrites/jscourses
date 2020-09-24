// Les pointeurs 

#include <stdio.h>

int main() { 
  char c = 'a';
  char *cptr = &c;
  printf("Bonjour %c\n", c);
  printf("Bonjour %p\n", cptr);

  int i = 0xab68;
  int *iptr = &i;
  printf("Bonjour %x\n", i);
  printf("Bonjour %p\n", iptr);
  return (0);
}
