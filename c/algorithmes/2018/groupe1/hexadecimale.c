#include <stdio.h>
#include <limits.h>

int main() {
  long long int a = 0b101101010;

  printf("a: %llx\n", a);

  a = 0xA244;
  printf("a: %llx\n", a);
  return(0);
}
