/*
 * Les boucles whole et do..while
 */

#include <stdio.h>  

int main()
{

  int compteur = 0;

  do { // boucle do..while
    printf("do_while:: compteur: %d\n", compteur);

  } while( compteur > 0);

  while( compteur > 0) { // boucle while
    printf("while:: compteur: %d\n", compteur);
  }

  return 0;
}
