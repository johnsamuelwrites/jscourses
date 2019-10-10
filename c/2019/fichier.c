/*
 * Lecture d'un fichier
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {
  int fd, size;
  char message[1000];

  fd = open("./bonjour.c", O_RDONLY);
  size = read(fd, message, sizeof(message)); 

  printf("J'ai lu %d caractères\n", size);

  int i;
  for (i = 0; i< size; i++) {
    printf("%c", message[i]);
  }
  printf("\n");
  return(0);
}
