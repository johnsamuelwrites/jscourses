/*
 * pointeur à pointeur
 */

#include <stdio.h>

int main() {
  char c = 'A';
  char *cptr = &c;
  char **cptrcptr = &cptr;

  printf("%c\n", *cptr);
  printf("%c\n", **cptrcptr);

  printf("%p\n", cptr);
  printf("%p\n", *cptrcptr);
  printf("%p\n", cptrcptr);

  return(0);
}
