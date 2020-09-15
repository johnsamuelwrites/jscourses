// énumérations

#include <stdio.h>

int main() {
  enum boolean1 {FAUX=2, VRAI};
  enum boolean1 s1 = VRAI;
  printf("Bonjour %d\n", s1);
  return (0);
}
