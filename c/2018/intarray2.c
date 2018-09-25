#include <stdio.h>

int main() {

  int iarray[10];

  for (int i =0; i < 10; i++) {
    iarray[i] = i * 2;
  }

  for (int i =0; i < 10; i++) {
    printf("%d\n", iarray[i]);
  }

  return(0);
}
