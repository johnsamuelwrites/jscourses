/*
 * Les boucles while et do..while avec break
 */

#include <stdio.h>  

int main()
{

  int compteur = 1;

  do { // do.. while avec le break
    printf("do_while:: compteur: %d\n", compteur);
    if (compteur % 10 == 0) {
      break;
    }
    compteur = compteur + 1;
  } while( compteur > 0);

  while( compteur > 0) { // while avec le break
    printf("while:: compteur: %d\n", compteur);
    if (compteur % 10 == 0) {
      break;
    }
    compteur = compteur + 1;
  }

  return 0;
}
