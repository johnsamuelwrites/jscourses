#include <stdio.h>

#ifndef PI
#define PI 3.14
#endif

#ifndef area
#define area(rayon) PI * rayon * rayon
#endif

int main() {
  float rayon = 23;

  float a = area(rayon);
  float perimetre = 2 * PI * rayon;
  printf("area: %f\n", a);

  return(0);
} 
