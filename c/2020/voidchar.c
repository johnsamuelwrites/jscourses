// L'utilisation de pointeurs génériques 

#include <stdio.h>

int main() { 
  char c = 'a';
  char d = 't';
  void *vptr = &c;
  char *cptr = &c;

  printf("Bonjour %c\n", *((char *) vptr));
  printf("Bonjour %c\n", *cptr);

  return (0);
}
