#include <stdio.h>

int main() {
  int  a = 10;
  int  b = 20;
  printf("a %% 2 et a<b: %d\n", a%2==0 && a<b);
  printf("10 et a<b: %d\n", 10 && a<b);

  printf("!10 %d\n", !a);

  return(0);
}
