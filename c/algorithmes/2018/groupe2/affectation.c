#include <stdio.h>

int main() {
  int  a = 1;
  a = 1;
  printf("%x\n", a <<= 1);
  printf("%x\n", a <<= 1);

  printf("%x\n", a += 1);
  printf("%x\n", a += 1);
  return(0);
}
