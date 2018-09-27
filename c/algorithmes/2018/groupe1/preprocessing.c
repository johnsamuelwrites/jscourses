#include <stdio.h>

#define PI 3.14
#define mod(num1,num2) num1%num2

int main() {
  float radius = 20;

  PI = 2.14;

  float area = PI * radius * radius;
 
  printf("area: %f\n", area);
  printf("mod: %d\n", mod(12, 2));
  return(0);
}

