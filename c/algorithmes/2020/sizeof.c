/*
 * des variables
 */

#include <stdio.h>

int main() {
  char c;
  int i;
  double d;
  long double ld;
  printf("sizeof char %lu\n", sizeof(char));
  printf("sizeof int %lu\n", sizeof(int));
  printf("sizeof double %lu\n", sizeof(double));
  printf("sizeof long double %lu\n", sizeof(long double));

  printf("sizeof char %lu\n", sizeof(c));
  printf("sizeof int %lu\n", sizeof(i));
  printf("sizeof double %lu\n", sizeof(d));
  printf("sizeof long double %lu\n", sizeof(ld));
  return (0);
}
