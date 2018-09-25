#include <stdio.h>

int main() {
  char a;

  printf("size: %lu\n", sizeof(char ));
  printf("size: %lu\n", sizeof(unsigned char));

  printf("size: %lu\n", sizeof(short ));
  printf("size: %lu\n", sizeof(unsigned short));

  printf("size: %lu\n", sizeof(long long ));
  printf("size: %lu\n", sizeof(unsigned long long));
  printf("size: %lu\n", sizeof(float ));
  printf("size: %lu\n", sizeof(double));
  printf("size: %lu\n", sizeof(long double));
  return(0);
}
