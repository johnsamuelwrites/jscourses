/* 
 * Utilisation des pointeurs pour la manipulation
 * des variables
 */


#include <stdio.h>

int main() {
  char  c = 0xa4;
  char* addr = &c;

  printf("c: %hx\n", c);
  printf("addr: %p\n", addr);

  c = 0x7f;
  printf("c: %hx\n", c);

  *addr = 0x78;
  printf("c: %hx\n", c);
  printf("c: %hx\n", *addr);
 
  return(0);
}
