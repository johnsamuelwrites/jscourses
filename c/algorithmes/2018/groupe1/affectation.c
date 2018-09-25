#include <stdio.h>
#include <limits.h>

int main() {
  int a = 0x1; 

  printf("a << 1 :%x\n", a <<= 1);
  printf("a << 1 :%x\n", a <<= 1);
  printf("a << 1 :%x\n", a <<= 1);

  return(0);
}
