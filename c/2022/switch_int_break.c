/*
 * switch avec le break
 */

#include <stdio.h>  

int main()
{

  int a = 4;

  switch (a) {
    case 1 : printf("un\n"); break;
    case 2 : printf("deux\n"); break;
    case 3 : printf("trois\n"); break;
    case 4 : printf("quatre\n"); break;
    case 5 : printf("cinq\n"); break;
    default : printf(" a > 5\n");
  }

  return 0;
}
