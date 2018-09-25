#include <stdio.h>

int main() {

  int compteur = 0;

  while (compteur < 10) {
     printf("1. while: Bonjour %d\n", compteur);
     compteur++;
  }

  do {
     printf("2. do...while: Bonjour %d\n", compteur);
     compteur++;
  }
  while (compteur < 10);


  return(0);
}
