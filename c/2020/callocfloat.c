// L'utilisation des fonctions calloc et free
// pour l'allocation dynamique de mémoire
// afin de créer un tableau de float

#include <stdio.h>
#include <stdlib.h>

int main() { 
  int taille;
  float *num;

  char taillestr[10];
  printf("La taille de votre tableau: ");
  fgets(taillestr, 10, stdin);
  sscanf(taillestr, "%d", &taille);

  num = calloc(sizeof(float), taille);
  if (num == NULL) {
    printf("Erreur: allocation de mémoire\n");
    return(1);
  }

  printf("Vos numéros: \n");
  for (int i = 0; i <taille; i++) {
    scanf("%f", &num[i]);
  }

  for (int i = 0; i <taille; i++) {
    printf("%f\n", num[i]);
  }

  return (0);
}
