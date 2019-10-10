/*
 * Les octets d'une variable
 */

#include <stdio.h>

int main() {
  int i = 0x7799bbaa;
  void *vptr = &i;

  printf("%hhx\n", *((char *) vptr));
  printf("%hhx\n", *((char *)(vptr + 1)));
  printf("%hhx\n", *((char *)(vptr + 2)));
  printf("%hhx\n", *((char *)(vptr + 3)));

  return(0);
}
