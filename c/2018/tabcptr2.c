#include <stdio.h>

int main() {
  char message[] = "bonjour";
  char *cptr;
  cptr = &message[0];
  
  printf("%p\n", cptr);
  printf("%c\n", *cptr);
  printf("%c\n", *(cptr+1));
  printf("%c\n", *(cptr+2));
  printf("%p\n", cptr);

  return(0);
}
