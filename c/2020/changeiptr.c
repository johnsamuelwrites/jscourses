// Les pointeurs et les opérations

#include <stdio.h>

int main() { 
  int i = 0x34;
  int *iptr = &i;
  printf("Bonjour %x\n", i);
  printf("Bonjour %p\n", iptr);
  printf("Bonjour %x\n", *iptr);

  i = i + 1;
  printf("Bonjour %x\n", i);

  *iptr = 0x10;
  printf("Bonjour %x\n", i);

  *iptr = *iptr + 1;
  printf("Bonjour %x\n", i);
  printf("Bonjour %x\n", *iptr);
  return (0);
}
