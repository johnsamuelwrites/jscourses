/**
 * Ce programme affiche des messages avec la valeur de variables dans des ordres différents.
 */

#include <stdio.h>

int main() {
   int annee = 2023;
   int mois = 9;
   char c = 'A';
   float pi = 3.14;

   // Affiche les variables dans l'ordre annee, mois, c, pi
   printf("%d %i %c %f\n", annee, mois, c, pi);

   // Affiche les variables dans l'ordre annee, mois, c (en tant qu'entier), pi
   printf("%d %i %d %f\n", annee, mois, c, pi);

   // Change la valeur de c à 123 et affiche les variables à nouveau
   c = 123;
   printf("%d %i %c %f\n", annee, mois, c, pi);

   return 0;
}

