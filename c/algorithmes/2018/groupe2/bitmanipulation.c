#include <stdio.h>

int main() {
  int  a = 1;
  int b = ~a;
  printf("%x\n", b);
  printf("%x\n", ~a);

  printf("%x\n", a && 0x10);
  printf("%x\n", a & 0x10);
  printf("%x\n", a ^ 0x10);

  a = 1;
  printf("%x\n", a << 1);
  printf("%x\n", a << 1);

  printf("%x\n", a + 1);
  printf("%x\n", a + 1);

  a = 1;
  printf("%x\n", a << 1);
  printf("%x\n", a << 1);

  printf("%x\n", a + 1);
  printf("%x\n", a + 1);
  return(0);
}
