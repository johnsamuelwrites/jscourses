/*
 * Manipulation d'un fichier en mode écriture (O_WRONLY)
 */

#include <stdio.h> // header
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
  int fd;
  char message[] = "Bonjour";

  fd = open("message.txt", O_CREAT|O_WRONLY, S_IRUSR|S_IWUSR);
 
  if (fd <0) {
    perror("Open message.txt");
    exit(1);
  }

  int size = write(fd, message, sizeof(message));

  printf("Wrote %d in the file message.txt\n", size);

  close(fd);
  return(0);
}
