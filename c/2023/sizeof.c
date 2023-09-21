/* 
 * Ce programme a pour objectif de montrer comment utiliser l'opérateur 
 * sizeof pour déterminer la taille en octets de différents 
 * types de données en C, notamment les tableaux et les chaînes de caractères.
 */

#include <stdio.h>

int main() {
  int tableau[20];
  int prix[] = {1, 2, 3, 4, 5};
  char message[] = "Bonjour";

  // Utilisation de l'opérateur sizeof pour afficher la taille en octets des tableaux et de la chaîne de caractères
  printf("sizeof(tableau): %lu\n", sizeof(tableau));
  printf("sizeof(prix): %lu\n", sizeof(prix));
  printf("sizeof(message): %lu\n", sizeof(message));

  return 0;
}

