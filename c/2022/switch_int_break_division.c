/*
 * switch et l'utilisation de break
 */

#include <stdio.h>  

int main()
{

  int a = 12;

  switch (a % 5) {
    case 1 : 
    case 2 : 
    case 3 : 
    case 4 : printf("a %% 5 = %d\n", (a%5)); break;
    case 0 : printf("a est divisé par 5\n");
  }

  return 0;
}
