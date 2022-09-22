/*
 * Pointeurs
 */

#include <stdio.h> // header

int main()
{
  char c = 'a';

  char *charptr = &c;

  printf("sizeof(char): %lu\n", sizeof(char));
  printf("sizeof(c): %lu\n", sizeof(c));
  printf("sizeof(char *): %lu\n", sizeof(char *));
  printf("sizeof(charptr): %lu\n", sizeof(charptr));

  printf("c: %c\n", c);

  c= 'b';
  printf("c: %c\n", c);

  *charptr = 'c';
  printf("c: %c\n", c);

  printf("charptr: %p\n", charptr);
  printf("*charptr: %c\n", *charptr);
  return 0;
}
