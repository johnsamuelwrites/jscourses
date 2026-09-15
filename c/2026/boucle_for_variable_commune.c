#include <stdio.h>

int main() {
   int a = 0;
   for (; a <10 ; a++) {
    printf("%i ", a);
   }
    printf("\n");
   for (; a <10 ; a++) {
    printf("%i ", a);
    a += 2;
   }
   printf("\n");
   return 0;
}