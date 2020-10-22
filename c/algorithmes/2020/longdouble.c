/*
 * L'utilisation d'une variable de type long double
 */

#include <stdio.h>

int main() {
  long double ld = 3.14E2;
  printf("long double ld %Lg\n", ld);
  ld = 3.14E-2;
  printf("long double ld %Lg\n", ld);
  ld = 3.14E-6;
  printf("long double ld %Lg\n", ld);
  ld = 7.88E-6;
  printf("long double ld %Lg\n", ld);
  return (0);
}
