/*
 * Utilisation de la ligne de commande
 */

#include <stdio.h>

int main(int argc, char **argv) {
  char message[3][30] = {
    "bonjour",
    "le monde",
    "Programmation en C"
   };

  printf("%p\n", argv[0]);
  printf("%p\n", argv[1]);
  printf("%p\n", argv[2]);

  return(0);
}
