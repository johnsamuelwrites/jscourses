/*
 * Les notations hexadécimales, octales et binaires
 */

#include <stdio.h>  // header
#include <limits.h> // header

int main()
{
  int a = 0b10101111; // notation binaire

  printf("a (decimal): %d\n", a);
  printf("a (octal): %o\n", a);
  printf("a (hexadecimal): %x\n", a);

  a = 0234734; // Octal // notation octale
  printf("a (decimal): %d\n", a);
  printf("a (octal): %o\n", a);
  printf("a (hexadecimal): %x\n", a);

  a = 0x234734; // notation hexadécimale
  printf("a (decimal): %d\n", a);
  printf("a (octal): %o\n", a);
  printf("a (hexadecimal): %x\n", a);
  return 0;
}
