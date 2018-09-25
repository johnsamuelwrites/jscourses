#include <stdio.h>

int main() {

  int num1 = 20;

  if (num1 % 6 == 0) {
    printf("%d est divisible par 6\n", num1);
  }
  else if (num1 % 3 == 0) {
    printf("%d est divisible par 3\n", num1);
  }
  else if (num1 % 2 == 0) {
    printf("%d est divisible par 2\n", num1);
  }

  return(0);
}
