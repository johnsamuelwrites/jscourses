/*
 * les pointeurs génériques 
 */

#include <stdio.h>

int main() {
  char  ch = 'a';
  void *vptr = &ch;

  int i = 10;
  vptr = &i;

  float f = 10.20;
  vptr = &f;

  return (0);
}
