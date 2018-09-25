#include <stdio.h>

int main() {
  char c = 0xa4;
  char *addr = &c;

  printf("%p\n", &c);
  printf("%p\n", addr);
}
