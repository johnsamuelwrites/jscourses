/*
 * Tableaux de nombres entiers et en virgule flottante et leur manipulation
 */
#include <stdio.h>

int main() {
  int i;
  int tableauint[20];

  for (i= 0; i < 20; i++) {
    tableauint[i] = i * 2;
  }

  tableauint[19] = 5000;
  tableauint[200000] = 5000;
  for (i= 0; i < 20; i++) {
    printf("%i\n", tableauint[i]);
  }
  printf("%d\n", tableauint[200000]);
  

  return(0);
}
