/*
 * Valeur minimale et maximale des différents types
 */

#include <stdio.h> // header
#include <limits.h> // header

int main() {
  char ch='a';
  printf("LIMITS(char) %hhu %hhu\n", SCHAR_MIN, SCHAR_MAX);
  printf("LIMITS(unsigned char) %hhu %hhu\n", 0, UCHAR_MAX);

  printf("LIMITS(int) %i %i\n", INT_MIN, INT_MAX);
  printf("LIMITS(unsigned int) %u %u\n", 0, UINT_MAX);
  return 0;
}
