/* 
 * Rénommer le type de données
 */


#include <stdio.h>

int main() {
  typedef int entier;

  entier i = 20;
  printf("i: %i\n", i);

  return 0;
} 
