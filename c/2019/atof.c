/* 
 * Utilisation de la fonction atof
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  char message[100] = "1034567.234";
  double num = atof(message);

  printf("%s %G\n", message, num);
  return(0);
}
