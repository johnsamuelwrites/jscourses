#include <stdio.h>
#include <limits.h>

int main() {
  int salles[3][4] = { 
      {101, 102, 103, 104},
      {201, 202, 203, 204},
      {301, 302, 303, 304}
    };

  for (int i=0; i<3; i++) {
    for (int j=0; j<4; j++) {
      printf("%d ", salles[i][j]);
    }
    printf("\n");
  }

  return(0);
}
