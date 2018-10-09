#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  printf("nombre d'arguments %d\n", argc);
  if (argc != 2 ) {
    printf("usage: commande votre nom\n");
    exit(1);
  }
  printf("Bonjour %s\n", argv[1]);

  return(0);
}
