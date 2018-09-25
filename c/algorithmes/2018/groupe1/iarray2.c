#include <stdio.h>
#include <limits.h>

int main() {
  int notes[] = { 14, 15, 20, 18, 16, 17, 19};

  printf("%ld\n", sizeof(notes));

  for (int i=0; i< sizeof(notes)/sizeof(int); i++) {
    printf("%d\n", notes[i]);
  }

  return(0);
}
