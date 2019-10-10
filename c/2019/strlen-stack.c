/*
 * Utilisation de fonctions de la bibliothèque string.h
 */

#include <stdio.h>
#include <string.h>

int main() {
  char message[16];
  scanf("%15s", message);
  printf("strlen(message) %ld", strnlen(message, sizeof(message)));
  printf("message: %s", message);
  return(0);
}
