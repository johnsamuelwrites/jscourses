#include <stdio.h> //header
#include <stdlib.h>

int main() {
 
  char numstr[] = "234";
  int num = atoi(numstr);
  long int numl = atol(numstr);
  long long int numll = atoll(numstr);

  printf("num: %d %ld %lld\n", num, numl, numll);
  return(0);
}
