/*
 * Utilisation de la fonction sscanf
 */

#include <stdio.h>

int main() {
  char numstr[100] = "10,20,3.14,4.56";
  int num1, num2;
  float numf;
  double numd;
  sscanf(numstr, "%d,%d,%f,%lG", &num1, &num2, &numf, &numd);
  printf("%d %d %f %G\n", num1, num2, numf, numd);
  return(0);
}
