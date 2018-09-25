#include <stdio.h>

int main() {

  int salles[3][5] = {
    {101, 102, 103, 104, 105},
    {201, 202, 203, 204, 205},
    {301, 302, 303, 304, 305}
  }; 

  for (int i =0; i < 3; i++) {
    for (int j =0; j < 5; j++) {
      printf("%d ", salles[i][j]);
    }
    printf("\n");
  }

  return(0);
}
