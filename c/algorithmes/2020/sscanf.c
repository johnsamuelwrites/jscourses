/*
 * utilisation de la fonction sscanf 
 * pour récupérer les valeurs
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2;
  float fnum;

  char *message = "200 340 34.45";
  sscanf(message, "%d %d %f", &num1, &num2, &fnum);

  char *numstr = "1235";
  int num = atoi(numstr); 
  
  printf("num=%d, num1=%d, num2=%d, fnum=%f\n", num, num1, num2, fnum);

  return (0);
}
