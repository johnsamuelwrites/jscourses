/*
 * affiche les valeurs maximum et minimum de différent types de données
 */
#include <stdio.h> //en-têtes
#include <limits.h> //en-têtes

int main() {
  printf("unsigned char: %d %d\n", 0, UCHAR_MAX);
  printf("signed char: %d %d\n", SCHAR_MIN, SCHAR_MAX);
  printf("unsigned short: %d %d\n", 0, USHRT_MAX);
  printf("signed short: %d %d\n", SHRT_MIN, SHRT_MAX);
  return(0);
}
