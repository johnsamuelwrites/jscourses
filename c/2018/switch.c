#include <stdio.h>

int main() {

  int num1 = 15;

  switch(num1%6) {
    case 0: printf("%d est divisible par 6\n", num1);break;
    case 1: 
    case 2:
    case 3:
    case 4:
    case 5: printf("%d n'est divisible par 6\n", num1);break;
  }

  return(0);
}
