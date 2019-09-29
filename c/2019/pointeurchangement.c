/*
 * Manipulation des variables via les pointeurs
 */
#include <stdio.h>

int main() {
  char c = 'a';
  char *addrc = &c;
 
  printf("char: %c\n", c);

  c = 'b';
  printf("char: %c\n", c);

  *addrc = 'c';
  printf("char: %c\n", c);

  return(0);
}
