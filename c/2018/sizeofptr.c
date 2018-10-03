#include <stdio.h> //header

int main() {
  char *cptr = NULL;
  int *iptr = NULL;

  char **cptrptr;


  printf("sizeof(cptr): %lu\n", sizeof(cptr));
  printf("sizeof(iptr): %lu\n", sizeof(iptr));
  printf("sizeof(*cptr): %lu\n", sizeof(*cptr));
  printf("sizeof(*iptr): %lu\n", sizeof(*iptr));
  printf("sizeof(&cptr): %lu\n", sizeof(&cptr));
  printf("sizeof(&iptr): %lu\n", sizeof(&iptr));
  return(0);
}
