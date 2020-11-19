/*
 * utilisation de gdb
 */

#include <stdio.h>

void modifier(int *tab) {
  tab[1000] = 12;
  printf("%d\n", tab[1000]);
}

int main() {
  int taille = 12;
  char message[] = "Bonjour";

  int table[2000];
  printf("Utilisation de gdb\n");

  modifier(table);

  return (0);
}
