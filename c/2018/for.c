#include <stdio.h>

int main() {

  int compteur;

  for (compteur = 0; compteur < 10; compteur++) {
     printf("1. For: Bonjour %d\n", compteur);
  }

  for (; compteur < 10; compteur++) {
     printf("2. For: Bonjour %d\n", compteur);
  }

  for (compteur = 0; compteur < 5; ) {
     printf("3. For: Bonjour %d\n", compteur++);
  }

  for (compteur = 0; compteur < 5; compteur++) {
     printf("4. For: Bonjour %d\n", compteur);
     compteur += 2;
  }

  return(0);
}
