/*
 * les avertissements liés aux pointeurs
 */

#include <stdio.h>

int main() {
  char  ch = 'a';
  char *ptrch = &ch;

  int i = 10;
  ptrch = &i;

  return (0);
}
