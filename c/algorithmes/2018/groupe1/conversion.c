#include <stdio.h>

int main() {
  unsigned char c = 250;
  unsigned short s = 123;

  s = c;
  c = (int)s;
  printf("s: %hu\n",s);
  printf("c: %hhu\n",c);

  return(0);
}
