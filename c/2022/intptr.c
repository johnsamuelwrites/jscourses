/*
 * Les opérations sur les pointeurs
 */

#include <stdio.h> // header

int main()
{
  int entier = 2;

  int *ptrentier = &entier;

  printf("ptrentier: %p\n", ptrentier);
  printf("entier: %d, *ptrentier: %d\n", entier, *ptrentier);

  *ptrentier = *ptrentier + 2;
  printf("entier: %d, *ptrentier: %d\n", entier, *ptrentier);

  return 0;
}
