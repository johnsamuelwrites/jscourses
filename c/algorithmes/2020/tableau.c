/*
 * un tableau d'entiers
 */

#include <stdio.h>

int main() {
  int tableau[20];
  int i = 0;

  for (i=0; i < 20; i++) {
    tableau[i] = i * 2;
  }

  for (i=0; i < 20; i++) {
    printf("%d\n", tableau[i]);
  }
  return (0);
}
