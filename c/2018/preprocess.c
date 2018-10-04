#include <stdio.h>

#ifndef PI
#define PI 3.14
#endif

int main() {
  float rayon = 23;

  float area = PI * rayon * rayon;
  float perimetre = 2 * PI * rayon;
  printf("area: %f\n", area);

  return(0);
} 
