/*
 * les pointeurs
 */

#include <stdio.h>

int main() {
  char ch = 'a';
  char *ptrch = &ch;

  printf("ch: %c\n", ch);
  printf("adresse: %p\n", ptrch);
  printf("ch: %c\n", *ptrch);

  *ptrch = 'b';
  printf("ch: %c\n", ch);

  ch = 't';
  printf("ch: %c\n", ch);
  printf("ch: %c\n", *ptrch);

  return (0);
}
