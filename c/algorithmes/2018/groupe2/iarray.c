#include <stdio.h>

int main() {
  int notes[5] = {14, 18, 20, 16, 15};

  int i = 0;
  for (i =0; i < 5; i++) {
    printf("%d ", notes[i]);
  }
  printf("\n");

  int salles[][4] = {
      {100, 101, 102, 103},
      {200, 201, 202, 203},
      {300, 301, 302, 303}
  };

  int j = 0;
  for (i =0; i < 3; i++) {
    for (j =0; j < 4; j++) {
      printf("%d ", salles[i][j]);
    }
    printf("\n");
  }
  return(0);

}
