#include <stdio.h>

int main() {
  char *caddr;
  short s = 0x6416;
  caddr = (char *)&s;

  printf("%hhx\n", *caddr);
  printf("%hhx\n", *(caddr+1));

  return(0);
}
