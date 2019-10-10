/*
 * Utilisation des arguments passés depuis la ligne de commande
 */

#include "message.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
  int i;
  print("Bonjour\n");
  printf("compteur: %d\n", argc);
  for (i = 0; i < argc; i++) {
    printf("valeur %d: %s\n", i, argv[i]);
  }
  return(0);
}
