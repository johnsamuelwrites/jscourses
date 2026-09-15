#include <stdio.h>

int main() {
   for (int a = 0; a <10 ; a++) {
    printf("%i ", a);
   }
    printf("\n");
   for (int a = 0; a <10 ; a++) {
    printf("%i ", a);
    a += 2;
   }
   printf("\n");
   return 0;
}