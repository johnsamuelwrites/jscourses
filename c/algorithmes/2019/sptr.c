/* 
 * Utilisation des pointeurs
 */

#include <stdio.h>

int main() {
  short s = 0xa478;
  //char* addr = &s;

  short *saddr = &s;
  return(0);
}
