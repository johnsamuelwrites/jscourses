// tableau à deux indices (int)

#include <stdio.h>

int main() {
  int itableau[3][20];

  int compteur1;
  int compteur2;
  for (compteur1 = 0; compteur1  < 3; compteur1++) {
    for (compteur2 = 0; compteur2  < 20; compteur2++) {
       itableau[compteur1][compteur2] = compteur1 * compteur2; 
    }
  }

  for (compteur1 = 0; compteur1  < 3; compteur1++) {
    for (compteur2 = 0; compteur2  < 20; compteur2++) {
       printf("%3d ",itableau[compteur1][compteur2]);
    }
    printf("\n");
  }

  return (0);
}
