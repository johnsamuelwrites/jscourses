/*
 * Utilisation de fonctions de la bibliothèque string.h
 */

#include <stdio.h>
#include <string.h>

int main() {
  char message1[100] = "Bonjour le monde! ";
  char message2[10] = "Pierre";

  strncat(message1, message2, sizeof(message1));
  printf("message1: %s\n", message1);

  strncpy(message1, message2, sizeof(message1));
  printf("message1: %s\n", message1);

  printf("strncmp(message1, message2): %d\n", strncmp(message1, message2, sizeof(message2)));
  printf("strncmp(message1, message2): %d\n", strncmp(message2, message1, sizeof(message2)));
 
  return(0);
}
