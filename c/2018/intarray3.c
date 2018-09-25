#include <stdio.h>

int main() {

  int notes[] = {14, 18, 20, 16, 15, 18, 20, 20, 13, 14, 15};

  printf("sizeof(int): %ld\n", sizeof(int));
  printf("sizeof(notes): %ld\n", sizeof(notes));

  for (int i =0; i < sizeof(notes)/sizeof(int); i++) {
    printf("%d\n", notes[i]);
  }

  return(0);
}
