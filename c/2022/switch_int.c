/*
 * switch sans break
 */

#include <stdio.h>

int main()
{

  int a = 4;

  switch (a)
  {
  case 1:
    printf("un\n");
  case 2:
    printf("deux\n");
  case 3:
    printf("trois\n");
  case 4:
    printf("quatre\n");
  case 5:
    printf("cinq\n");
  default:
    printf(" a > 5\n");
  }

  return 0;
}
