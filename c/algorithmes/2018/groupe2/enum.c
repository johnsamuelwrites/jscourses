#include <stdio.h>

int main() {
  enum STATUT {ETUDIANTE=1, VACATAIRE=12, ENSEIGNANTE};
  
  enum STATUT s;

  s= ETUDIANTE;

  printf("status: %u\n", s);
  s= ENSEIGNANTE;

  printf("status: %u\n", s);
  return(0);
}
