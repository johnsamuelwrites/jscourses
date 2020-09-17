// tableau à deux indices (float)

#include <stdio.h>

int main() {
  float ftableau[20];

  int compteur;
  for (compteur = 0; compteur  < 20; compteur++) {
    ftableau[compteur] = compteur * 3.14;
  }

  for (compteur = 0; compteur  < 20; compteur++) {
    printf("%f\n", ftableau[compteur]);
  }


  return (0);
}
