#include <stdio.h>

int main() {
  int c = 0xaabbccdd;
  char *cptr = (char *) &c;

  printf("cptr:%p\n", cptr);
  printf("&c:%p\n", &c);

  printf("Octet 1: %hhx\n", *cptr);
  printf("Octet 2: %hhx\n", *(cptr+1));
  printf("Octet 2: %hhx\n", *(cptr+2));
  printf("Octet 2: %hhx\n", *(cptr+3));

  return(0);
}
