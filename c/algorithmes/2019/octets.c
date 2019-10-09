/* 
 * Utilisation des pointeurs pour voir le contenu
 * d'une varibale de type int
 */

#include <stdio.h>

int main() {
  int i = 0x7799a478;

  void *vptr = &i;
  printf("%hhx: 0\n", *((char *)vptr));
  printf("%hhx: 1\n", *((char *)(vptr + 1)));
  printf("%hhx: 2\n", *((char *)(vptr + 2)));
  printf("%hhx: 3\n", *((char *)(vptr + 3)));

  return(0);
}
