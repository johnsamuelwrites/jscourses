#include <stdio.h>

int main() {

  int compteur = 1;

  while (compteur < 10) {
     printf("1. while (avant condition): Bonjour %d\n", compteur);
     if(compteur % 3 == 0) {
       continue;
     }
     printf("1. while (après condition): Bonjour %d\n", compteur);
     compteur++;
  }


  return(0);
}
