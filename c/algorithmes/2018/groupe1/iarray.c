#include <stdio.h>
#include <limits.h>

int main() {
  int notes[5] = { 14, 15, 20, 18, 16};

  for (int i=0; i<5; i++) {
    printf("%d\n", notes[i]);
  }

  return(0);
}
