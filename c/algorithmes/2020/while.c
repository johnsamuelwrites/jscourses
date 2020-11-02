/*
 * boucle while et break
 */

#include <stdio.h>

int main() {
  int i = 0;

  while ( i  < 10) {
    printf("%d\n", i);
    if (i == 3) { 
	break;
    } 
    i = i + 1;
  }

  return(0);
}
