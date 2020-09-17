// boucle do..while et une condition

#include <stdio.h>

int main() {
  int annee = 2020;

  do {
    annee++;
    if(annee % 6 == 0) {
      printf("Bonjour %d\n", annee);
      continue;
    }

    printf("%d\n", annee);
  }
  while(annee < 2030);

  return (0);
}
