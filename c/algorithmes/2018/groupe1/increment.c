#include <stdio.h>
#include <limits.h>

int main() {
  long int a = 10; 

  printf("a: %ld\n", a++);
  printf("a: %ld\n", ++a);
  printf("a: %ld\n", --a);
  printf("a: %ld\n", a--);
  return(0);
}
