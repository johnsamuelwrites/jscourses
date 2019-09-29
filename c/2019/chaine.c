/*
 * Manipulation d'un tableau de chaine de caractères
 */

#include <stdio.h>

int main() {
  int i;
  char message[2][11] = {"bonjour", "le monde!"};

  for (i= 0; i < 2; i++) {
    printf("%s\n", message[i]);  
  }
  
  printf("%s\n", message[0]);  
  printf("%s\n", message[1]);  

  printf("%c\n", message[0][0]);  
  message[1][0] = 'L';
  message[1][3] = 'M';
  printf("%s\n", message[1]);  

  return(0);
}
