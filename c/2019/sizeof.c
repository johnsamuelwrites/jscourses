/*
 * Affiche la taille des différents types de données
 */

#include <stdio.h>

int main() {
  char c = 'A';
  short s = 1000;
  int i = 1000000;
  float pi = 3.14;
  double ld = 3.14;
  long double lld = 3.14;
  printf("taille: char c %li\n", sizeof(c));
  printf("taille: short s %li\n", sizeof(s));
  printf("taille: int i %li\n", sizeof(i));
  printf("taille: float pi %li\n", sizeof(pi));
  printf("taille: double ld %li\n", sizeof(ld));
  printf("taille: long double ld %li\n", sizeof(lld));
  return(0);
}
