/*
 * Écrire dans un fichier en mode ajout
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main() {
  int fd, size;
  char message[1000] = "Bonjour";

  fd = open("./message.txt", O_CREAT|O_WRONLY|O_APPEND, S_IRUSR|S_IWUSR);
  size = write(fd, message, strlen(message)); 

  printf("%d caractères\n", size);
  close(fd);

  return(0);
}
