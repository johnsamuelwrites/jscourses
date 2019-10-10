#include <stdio.h>

int main() {
  int i = 10;
  float f = 10.14;
  double d = 10.34E-14;
  
  void *vptr = &i;
  vptr = &f;
  vptr = &d;

  return(0);
}
