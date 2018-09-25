#include <stdio.h>

int main() {
  int a[6] = {0xa, 0xb, 0xc, 0xd, 0xe};

  int *iptr = &a[0];

  for(int i=0; i<sizeof(a)/sizeof(int); i++) {
    printf("%p: ", iptr+i);
    printf("%x\n", *(iptr+i));
  }
  return(0);
}
