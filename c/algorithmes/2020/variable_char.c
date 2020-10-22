/*
 * L'utilisation des variables char, unsigned char, 
 * long long int
 */

#include <stdio.h>

int main() {
  char car = 'a';
  unsigned char ucar = 234;

  unsigned long long int lli = 2345;

  printf("Bonjour %c\n", car);
  printf("Bonjour %d\n", car);
  printf("Bonjour %c\n", ucar);
  printf("Bonjour %d\n", ucar);
  printf("Bonjour %lld\n", lli);

  lli = 2334551343LL;
  printf("Bonjour %lld\n", lli);
  return (0);
}
