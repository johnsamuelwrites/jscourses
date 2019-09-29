/*
 * Pointeurs
 */
#include <stdio.h>

int main() {
  char c = 'a';
  char *addrc = &c;
 
  short s = 0xa478;
  short *addrs = &s;

  int i = 0xa47865ff;
  int* addri = &i;

  printf("char addr: %p\n",addrc);
  printf("short addr: %p\n",addrs);
  printf("int addr: %p\n",addri);

  printf("char: %c\n", *addrc);
  printf("short: %hx\n", *addrs);
  printf("int: %x\n", *addri);

  return(0);
}
