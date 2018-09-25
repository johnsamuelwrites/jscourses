#include <stdio.h>

int main() {

  int salles[][5] = {
    {101, 102, 103, 104, 105},
    {201, 202, 203, 204, 205},
    {301, 302, 303, 304, 305},
    {401, 402, 403, 404, 405}
  }; 

  printf("sizeof(int): %ld\n", sizeof(int));
  printf("sizeof(int[5]): %ld\n", sizeof(int[5]));
  printf("sizeof(salles): %ld\n", sizeof(salles));

  for (int i =0; i < sizeof(salles)/sizeof(int[5]); i++) {
    for (int j =0; j < 5; j++) {
      printf("%d ", salles[i][j]);
    }
    printf("\n");
  }

  return(0);
}
