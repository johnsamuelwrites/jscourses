/*
 * sizeof et un tableau d'entiers
 */

#include <stdio.h>

int main() {
  int tableau[] = {12, 13, 25};
  int i = 0;
  printf("taille: %ld\n", sizeof(tableau));

  for (i=0; i < sizeof(tableau)/sizeof(int); i++) {
    printf("%d\n", tableau[i]);
  }
  return (0);
}
