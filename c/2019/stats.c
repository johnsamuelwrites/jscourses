/*
 * La taille d'un fichier
 */
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  struct stat sf;
  
  int status = stat(argv[1], &sf);
  if (status == -1 ) {
    perror("stats: ");
    return(EXIT_FAILURE);
  }

  printf("La taille: %ld", sf.st_size);
  return(0);
}
