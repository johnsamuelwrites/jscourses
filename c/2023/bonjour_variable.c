/*
 * afficher un message avec la valeur d'une ou plusieurs 
 * variables dans des ordres différents. 
 */

#include <stdio.h>

int main() {
   int annee = 2023;
   int mois = 9;
   printf("Bonjour le monde. C'est l'année %d\n", annee);
   printf("Bonjour le monde %d. C'est l'année\n", annee);
   printf("Bonjour le monde %d. C'est l'année %d\n", annee, annee);
   printf("Bonjour le monde %d. C'est le mois %d\n", annee, mois);
   printf("Bonjour le monde %d. C'est le mois %d\n", 2022, mois);
   return 0;
}
