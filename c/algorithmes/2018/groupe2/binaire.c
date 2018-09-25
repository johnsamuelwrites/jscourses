#include <stdio.h>

int main() {
  int  a = 0b1000;
  int  b = 0244;
  long long int  c = 0xA4;

  printf("a: %x\n", a);
  printf("b: %o\n", b);
  printf("c: %llx\n", c);

  return(0);
}
