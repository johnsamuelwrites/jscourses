/*
 * Utiliser des énumerations
 */

#include <stdio.h> // header

int main() {
  enum STATUS {ETUDIANTE, STAGIAIRE};
  enum STATUS st = STAGIAIRE;
  printf("Status: %u\n", st);

  enum STATUS2 {ETUDIANTE2=10, STAGIAIRE2, PROF};
  enum STATUS2 st2 = PROF;
  printf("Status: %u\n", st2);

  enum STATUS3 {ETUDIANTE3=10, STAGIAIRE3=15, PROF2};
  enum STATUS3 st3 = PROF2;
  printf("Status: %u\n", st3);
  return 0;
}
