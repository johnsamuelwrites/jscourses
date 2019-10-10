/*
 * Pointeurs incompatibles
 */
#include <stdio.h>

int main() {
  int i = 10;
  char *c = &i;

  return(0);
}
