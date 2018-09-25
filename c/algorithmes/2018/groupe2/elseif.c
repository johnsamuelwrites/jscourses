#include <stdio.h>

int main() {
  int a = 15;
 
  switch(a%2) {
    case 0: printf("%d est divisible par 2\n", a);
           break;
    default: printf("%d n'est divisible par 2\n", a);
  } 
  
  return(0);
}
