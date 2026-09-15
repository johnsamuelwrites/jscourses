#include <stdio.h>

int main() {
   int a = 0;
   for (; a <= 20 ; a++) {
    printf("%i ", a);
   }
   printf("\n");
   for (a--; a >=0 ; a--) {
    printf("%i ", a);
   }
   printf("\n");
   return 0;
}