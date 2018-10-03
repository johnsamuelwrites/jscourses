#include <stdio.h> //header
#include <stdlib.h>

int main() {
 
  char numstr[] = "234.567";
  float fnum;

  sscanf(numstr, "%f", &fnum);

  printf("Float num: %0.3f\n", fnum);

  return(0);
}
