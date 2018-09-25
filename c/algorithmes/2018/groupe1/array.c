#include <stdio.h>
#include <limits.h>

int main() {
  int a[20];

  int i;

  for (i = 0; i< 20; i++) {
    a[i] = i;
  }


  for (i = 0; i< 20; i++) {
    printf("%d\n", a[i]);
  }

  return(0);
}
