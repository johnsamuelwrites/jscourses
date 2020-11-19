/*
 * l'utilisation de la ligne de commande
 */

#include <stdio.h>

int main(int argc, char **argv) {
  if (argc < 2) {  
    printf("usage: lignedecommande Nom\n");
    return(1);
  }

  printf("Bonjour %s\n", argv[1]);
  printf("Ligne de commande: %s %s\n", argv[0], argv[1]);
  return (0);
}

