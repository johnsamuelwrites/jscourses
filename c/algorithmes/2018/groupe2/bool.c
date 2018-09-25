#include <stdio.h>

int main() {
  enum boolean {FAUX=0, VRAI=1};
  
  enum boolean b = FAUX;

  printf("status: %u\n", b);
  return(0);
}
