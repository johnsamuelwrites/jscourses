// boucle for (deux actualisations)

#include <stdio.h>

int main() {
  int annee;

  for (annee = 2020; annee < 2030; annee++) {
    printf("%d\n", annee);
    annee += 2;
  }

  return (0);
}
