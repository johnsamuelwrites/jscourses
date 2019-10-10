/*
 * Utilisation de fonctions de la bibliothèque string.h
 */

#include <stdio.h>
#include <string.h>

int main() {
  char message1[100] = "Bonjour le monde! ";
  char message2[10] = "Pierre";

  strcat(message1, message2);
  printf("message1: %s\n", message1);

  strcpy(message1, message2);
  printf("message1: %s\n", message1);

  printf("strcmp(message1, message2): %d\n", strcmp(message1, message2));
 
  return(0);
}
