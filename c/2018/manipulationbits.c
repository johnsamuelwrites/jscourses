#include <stdio.h>

int main() {
  int a = 0b1;
  
  printf("%d\n", a);
  printf("%d\n", a<<1);
  printf("%d\n", a<<2);
  printf("%d\n", a<<3);
  printf("%d\n", a<<4);
 
  int b = 0b1001;
  printf("%d\n", b);
  printf("%d\n", b>>1);
  printf("%d\n", b>>2);
  printf("%d\n", b>>3);
  

  return(0);
}
