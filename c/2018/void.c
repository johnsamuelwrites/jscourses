#include <stdio.h>

int main() {
  char c = 'h';
  void *vptr = &c;

  int *iptr = vptr;

  return(0);
}
