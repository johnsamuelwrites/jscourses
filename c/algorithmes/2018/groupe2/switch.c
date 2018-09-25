#include <stdio.h>

int main() {
  int a = 15;
 
  switch(a%3) {
    case 1: 
    case 2: printf("%d n'est divisible par 3\n", a);
            break;
    case 0: printf("%d est divisible par 3\n", a);
  } 
  
  return(0);
}
