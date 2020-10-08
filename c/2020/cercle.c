/* 
 * L'utilisation du préprocesseur 
 */

#include <stdio.h>
#include "definitions.h"

#ifndef PI
#define PI 3.14
#endif

int main() {
  float rayon =12;
  float area = PI * carre(rayon);
  printf("area: %f\n", area);
  printf("PI: %f\n", PI);
  printf("Mon message: " message "\n");
  return (0);
}
