/* 
 * Utilisation de la fonction atoi
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  char message[100] = "1034567";
  int num = atoi(message);

  printf("%s %d\n", message, num);
  return(0);
}
