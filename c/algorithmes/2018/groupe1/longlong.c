#include <stdio.h>
#include <limits.h>

int main() {
  printf("min(long long): %lld\n", LLONG_MIN);
  printf("max(long long): %lld\n", LLONG_MAX);
  printf("max(unsigned long long): %llu\n", ULLONG_MAX);
  return(0);
}
