#include <stdio.h>

/*
 * tableau bidimensionnel d'entiers 
 */

int main() {
    int prix[2][3]  = {
	    {11, 12, 19},
	    {18, 17, 23}
    };

    for (int compteurl = 0; compteurl < 2; compteurl++) {
      for (int compteurc = 0; compteurc < 3; compteurc++) {
	    printf("%d ", prix[compteurl][compteurc]);
      }
      printf("\n");
    }

    int prix2[2][3]  = {
	    {11, 12},
	    {18, 17}
    };

    for (int compteurl = 0; compteurl < 2; compteurl++) {
      for (int compteurc = 0; compteurc < 3; compteurc++) {
	    printf("%d ", prix2[compteurl][compteurc]);
      }
      printf("\n");
    }
    int prix3[2][3]  = {
	    11, 12,
	    18, 17
    };

    for (int compteurl = 0; compteurl < 2; compteurl++) {
      for (int compteurc = 0; compteurc < 3; compteurc++) {
	    printf("%d ", prix3[compteurl][compteurc]);
      }
      printf("\n");
    }
    return (0);
}
