/*
 * while..break
 */
#include <stdio.h>

int main() {
  int i = 1;

  while (i < 10) {
    printf("%d\n", i);
    if (i% 5 == 0) {
      break;
    }
    i++;
  }
}
