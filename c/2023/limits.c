/**
 * Ce programme affiche les valeurs minimales et maximales pour différents types de données.
 */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
   // Affiche les valeurs minimales et maximales pour signed char
   printf("signed char: min=%d max=%d\n", SCHAR_MIN, SCHAR_MAX);

   // Affiche les valeurs minimales et maximales pour signed int
   printf("signed int: min=%d max=%d\n", INT_MIN, INT_MAX);

   // Affiche les valeurs minimales et maximales pour unsigned int
   printf("unsigned int: min=%u max=%u\n", 0, UINT_MAX);

   // Affiche les valeurs minimales et maximales pour float
   printf("float: min=%f max=%f\n", FLT_MIN, FLT_MAX);

   return 0;
}

