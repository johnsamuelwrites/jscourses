/*
 * passage par référence
 */ 

#include <stdio.h>
void affichage2 (int tableau[][2]) {
  for (int i =0 ; i< 2; i++ ) {
    for (int j = 0 ; j< 2; j++ ) {
      printf("%3d ", tableau[i][j]);
    }
    printf("\n");
  }
}

void affichage (int tableau[2][2]) {
  for (int i =0 ; i< 2; i++ ) {
    for (int j = 0 ; j< 2; j++ ) {
      printf("%3d ", tableau[i][j]);
    }
    printf("\n");
  }
}


int main() {  
  int prix[2][2] = {
	{11, 12},
	{13, 14}
    };

  affichage(prix);
  affichage2(prix);
  return (0);
}
