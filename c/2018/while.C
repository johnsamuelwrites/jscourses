#include <stdio.h>

int main() {

  int compteur = 0;

  while (compteur < 10) {
     printf("1. while: Bonjour %d\n", compteur);
     compteur++;
  }

  while (compteur < 10) {
     printf("2. while: Bonjour %d\n", compteur);
     compteur++;
  }


  return(0);
}
