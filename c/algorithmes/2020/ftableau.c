/*
 * Tableau 
 */

#include <stdio.h>

int main() {
  float tableau[20];
  int i = 0;

  for (i=0; i < 20; i++) {
    tableau[i] = i * 2.3;
  }

  for (i=0; i < 20; i++) {
    printf("%f\n", tableau[i]);
  }
  return (0);
}
