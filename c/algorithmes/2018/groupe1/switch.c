#include <stdio.h>
#include <limits.h>

int main() {
  int a = 15;

  switch(a%6) {
     case 1: 
     case 2: 
     case 3: 
     case 4:
     case 5: printf("%d n'est pas divisible par 6\n",a);
             break;
     case 0: printf("%d est pas divisible par 6\n",a);
             break;
  }

  return(0);
}
