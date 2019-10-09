/* 
 * Les pointeurs génériques
 */

#include <stdio.h>

int main() {
  short s = 0xa478;
  int i = 0x7799a478;

  void *vptr = &s;
  printf("vptr : %p\n", vptr);
  printf("s : %hx\n", *((short *)vptr));

  vptr = &i;
  printf("vptr : %p\n", vptr);
  printf("i : %x\n", *((int *)vptr));

  return(0);
}
