/* 
 * Utilisation des pointeurs pour la manipulation
 * des variables
 */

#include <stdio.h>

int main() {
  int i = 0xa478;

  int *iaddr = &i;

  // i = i + 2
  *iaddr = *iaddr + 2;
  printf("i : %x\n", i);
  printf("*iptr : %x\n", *iaddr);

  return(0);
}
