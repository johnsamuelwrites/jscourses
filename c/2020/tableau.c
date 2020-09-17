// tableau d'entiers (int)

#include <stdio.h>

int main() {
  int itableau[20];

  int compteur;
  for (compteur = 0; compteur  < 20; compteur++) {
    itableau[compteur] = compteur * 2;
  }

  for (compteur = 0; compteur  < 20; compteur++) {
    printf("%d\n", itableau[compteur]);
  }


  return (0);
}
