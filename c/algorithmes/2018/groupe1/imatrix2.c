#include <stdio.h>
#include <limits.h>

int main() {
  int salles[][4] = { 
      {101, 102, 103, 104},
      {201, 202, 203, 204},
      {301, 302, 303, 304}
    };

  printf("sizeof(salles): %ld\n", sizeof(salles));
  printf("sizeof(int[4]): %ld\n", sizeof(int[4]));

  for (int i=0; i<sizeof(salles)/sizeof(int[4]); i++) {
    for (int j=0; j<4; j++) {
      printf("%d ", salles[i][j]);
    }
    printf("\n");
  }

  return(0);
}
