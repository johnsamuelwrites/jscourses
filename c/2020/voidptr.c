// L'utilisation de pointeurs génériques 

#include <stdio.h>

int main() { 
  char c = 'a';
  void *vptr = &c;

  int i = 10;
  vptr = &i;

  float f = 10;
  vptr = &f;

  return (0);
}
