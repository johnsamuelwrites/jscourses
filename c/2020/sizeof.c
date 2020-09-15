// affiche bonjour
//
//

#include <stdio.h>

int main() {

  printf("char %ld\n", sizeof(char));
  printf("short %ld\n", sizeof(short));
  printf("int %ld\n", sizeof(int));
  printf("long int %ld\n", sizeof(long int));
  printf("long long int %ld\n", sizeof(long long int));
  printf("float %ld\n", sizeof(float));

  double d;
  printf("double %ld\n", sizeof(d));
  return (0);
}
