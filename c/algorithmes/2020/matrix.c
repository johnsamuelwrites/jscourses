/*
 * tableau à deux indices
 */

#include <stdio.h>

int main() {
  int tableau[][2] = {
	  {12, 13},
	  {13, 16},
	  {14, 15},
  };
  int i = 0, j =0;

  for (i=0; i < 3; i++) {
    for ( j =0; j < 2; j++) {
      printf("%d ", tableau[i][j]);
    }
    printf("\n");
  }
  return (0);
}
