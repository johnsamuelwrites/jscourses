/*
 * Boucle do..while avec deux conditions et en utilisant break
 */

#include <stdio.h>  

int main()
{

  int compteur = 0;

  do {
    compteur = compteur + 1;
    if (compteur % 10 == 0) {
       break;      
    }
    printf("do_while:: compteur: %d\n", compteur);
  } while(compteur < 100);


  return 0;
}
