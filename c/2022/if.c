/*
 * Les conditions if
 */

#include <stdio.h>

int main()
{
  int a = 0;

  if (a = 0)
  { // incorrect
    printf("a est égale à 0\n");
  }

  printf("a: %d\n", a);

  if (a == 0)
  { // correct
    printf("a est égale à 0\n");
  }

  printf("a: %d\n", a);

  if (a = 1)
  { // incorrect
    printf("a est égale à 1\n");
  }

  printf("a: %d\n", a);

  return 0;
}
