#include <stdio.h>
#include <limits.h>

int main() {
  char a;

  printf("sizeof(char): %ld\n", sizeof(char));
  printf("sizeof(char): %ld\n", sizeof(a));
  printf("sizeof(long long): %ld\n", sizeof(long long));
  printf("sizeof(long double): %ld\n", sizeof(long double));
  return(0);
}
