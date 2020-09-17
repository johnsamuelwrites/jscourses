// boucle et une condition utilisant break

#include <stdio.h>

int main() {
  int annee = 2020;

  do {
    if(annee % 6 == 0) {
      break;
    }

    printf("%d\n", annee);
    annee++;
  }
  while(annee < 2030);

  return (0);
}
