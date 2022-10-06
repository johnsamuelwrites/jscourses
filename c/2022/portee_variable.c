/*
 * La portée des variables
 */

#include <stdio.h> // header

int annee = 2017;

void affiche_annee() {
  printf("Bloc affiche_annee: Bonjour le monde, année: %d\n", annee);
}

int main()
{
  int annee = 2018;
  {
    int annee = 2019;
    printf("Bloc dans le bloc main: Bonjour le monde, année: %d\n", annee);
  }
  printf("Bloc main: Bonjour le monde, année: %d\n", annee);

  affiche_annee();
  return 0;
}

