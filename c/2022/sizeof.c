/*
 * Taille des différents types
 */

#include <stdio.h> // header
#include <limits.h> // header

int main() {
  char ch='a';
  printf("sizeof(char) %lu\n", sizeof(char));
  printf("sizeof(ch) %lu\n", sizeof(ch));

  printf("sizeof(int) %lu\n", sizeof(int));
  printf("sizeof(long int) %lu\n", sizeof(long int));
  printf("sizeof(long long int) %lu\n", sizeof(long long int));
  return 0;
}
