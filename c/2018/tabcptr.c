#include <stdio.h>

int main() {
  char message[] = "bonjour";
  char *cptr;
  cptr = &message[0];
  
  printf("%c\n", *cptr);
  cptr = cptr + 1;
  printf("%c\n", *cptr);
  cptr = cptr + 1;
  printf("%c\n", *cptr);

  return(0);
}
