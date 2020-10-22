/*
 * des variables
 */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("signed char %d %d\n", SCHAR_MIN, SCHAR_MAX);
  printf("long long int %lld %lld\n", LLONG_MIN, LLONG_MAX);
  printf("float %f %f\n", FLT_MIN, FLT_MAX);
  printf("double %g %g\n", DBL_MIN, DBL_MAX);
  printf("long double %Lg %Lg\n", LDBL_MIN, LDBL_MAX);
  return (0);
}
