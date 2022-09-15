/*
 * Boucle for et les différentes possibilités
 */

#include <stdio.h>  

int main()
{

  int compteur = 0;

  for (compteur = 0; compteur < 10; compteur++) {
     printf("1. compteur: %d\n", compteur);
  }

  for (; compteur < 10; compteur++) {
     printf("2. compteur: %d\n", compteur);
  }

  for (; compteur > 0; compteur--) {
     printf("3. compteur: %d\n", compteur);
  }

  for (; compteur < 10; compteur += 2) {
     printf("4. compteur: %d\n", compteur);
  }
  return 0;
}
