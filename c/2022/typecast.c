/*
 * Division
 */

#include <stdio.h>

int main()
{

   int num1 = 15, num2 = 2, result1 = 0;
   result1 = num1/num2;

   printf("result %d/%d = %d\n", num1, num2, result1);
  
   float result2 = num1/num2;
   printf("result %d/%d = %f\n", num1, num2, result2);

   float result3 = (float)num1/num2;
   printf("result %d/%d = %f\n", num1, num2, result3);

   float result4 = (float)num1/(float)num2;
   printf("result %d/%d = %f\n", num1, num2, result3);

   return (0);

}
