#include <stdio.h>

typedef int entier;
typedef char caractere;
typedef float nombreenflottant;

int main() {
  entier e = 10;
  caractere c = 'b';
  nombreenflottant f = 3.14;

  printf("%d %c %f\n", e, c, f);
  return(0);
}
