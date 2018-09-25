#include <stdio.h>

int main() {
  int a = 101;

  if (a%2 == 0) {
    printf("%d est divisible par 2\n", a);
  }
  else {
    printf("%d n'est divisible par 2\n", a);
  }
  
  return(0);
}
