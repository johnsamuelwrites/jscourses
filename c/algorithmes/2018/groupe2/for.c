#include <stdio.h>

int main() {
  int a=1; 

  for (a = 0; a < 10; a++) {
    printf("%d\n", a);
  } 


  for (; a < 10;) {
    printf("%d\n", a);
  } 
  
  return(0);
}
