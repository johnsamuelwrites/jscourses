/*
 * Les tableaux
 */

#include <stdio.h>

int main()
{

  int compteur = 0;

  int tableau[20];

  printf("sizeof(tableau): %lu\n", sizeof(tableau));
 
  char message[10];
 
  float reel[10];

  double dreel[10];
 
  long long int entierll[10];

  printf("sizeof(message): %lu\n", sizeof(message));
  printf("sizeof(reel): %lu\n", sizeof(reel));
  printf("sizeof(dreel): %lu\n", sizeof(dreel));
  printf("sizeof(entierll): %lu\n", sizeof(entierll));

  return 0;
}
