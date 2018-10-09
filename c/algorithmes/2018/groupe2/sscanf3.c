#include <stdio.h>
#include <stdlib.h>

int main() {
  char numstr[] = "20;30";
  int num1, num2;
  sscanf(numstr, "%d;%d", &num1, &num2);
  printf("Les numéros: %d %d\n",num1, num2);

  return(0);
}
