/*
 * les pointeurs char et float
 */

#include <stdio.h>

int main() {
  char ch = 'a';
  char *ptrch = &ch;

  float f = 2;
  float *ptrf = &f;

  //caractère
  printf("ch: %c\n", ch);
  printf("adresse: %p\n", ptrch);
  printf("adresse: %p\n", &ch);

  //float
  printf("f: %f\n", f);
  printf("adresse: %p\n", ptrf);
  return (0);
}
