// la ligne de commande 

#include <stdio.h>

int main(int argc, char **argv) {
  if (argc != 2) {
    printf("Error\n");
    printf("usage: executable nom\n");
    return(1);
  }

  printf("Bonjour  ");

  printf("%s\n", argv[1]);
  return (0);
}
