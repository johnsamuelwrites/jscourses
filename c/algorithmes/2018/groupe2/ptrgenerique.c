#include <stdio.h>

int main() {
  void *vaddr;
  short s = 0x6416;
  vaddr = &s;
  int i = 0x1214;
  vaddr = &i;

  printf("%hhx\n", *((char *)vaddr));
  printf("%hhx\n", *((char*)vaddr+1));

  vaddr = &s;
  i = *((short *) vaddr);
  printf("%x\n", i);

  return(0);
}
