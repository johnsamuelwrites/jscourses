/*
 * Ce programme a pour objectif de démontrer l'utilisation des pointeurs en langage C.
 */


#include <stdio.h>

int main() {
  // Déclaration et initialisation d'une variable entière 'valeur'
  int valeur = 12;
  
  // Déclaration d'un pointeur vers une variable entière 'ptr_valeur' et affectation de son adresse
  int *ptr_valeur = &valeur;

  // Affichage de la valeur de 'valeur' et de son adresse à l'aide du pointeur
  printf("valeur = %d, adresse = %p\n", valeur, (void *)ptr_valeur);

  // Affichage de la valeur pointée par 'ptr_valeur'
  printf("valeur = %d\n", *ptr_valeur);

  // Déclaration et initialisation d'une variable flottante 'fvaleur'
  float fvaleur = 3.15;

  // Déclaration d'un pointeur vers une variable flottante 'fptr_valeur' et affectation de son adresse
  float *fptr_valeur = &fvaleur;

  // Affichage de la valeur de 'fvaleur' et de son adresse à l'aide du pointeur
  printf("fvaleur = %f, adresse = %p\n", fvaleur, (void *)fptr_valeur);

  // Affichage de la valeur pointée par 'fptr_valeur'
  printf("fvaleur = %f\n", *fptr_valeur);

  return 0;
}

