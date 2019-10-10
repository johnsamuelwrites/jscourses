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
  char message;

  fd = open("./bonjour.c", O_RDONLY);
  while(1) {
    size = read(fd, &message, sizeof(message)); 
    if(size < 1) {
      break;
    }
    printf("%c", message);
  }
  printf("\n");
  close(fd);
  return(0);
}
