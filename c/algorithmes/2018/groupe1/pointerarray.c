#include <stdio.h>

int main() {
  char a[6] = {'m', 'o', 'n', 'd', 'e'};

  char *cptr = &a[0];

  for(int i=0; i<sizeof(a)/sizeof(char); i++) {
    printf("%p: ", cptr+i);
    printf("%c\n", *(cptr+i));
  }
  return(0);
}
