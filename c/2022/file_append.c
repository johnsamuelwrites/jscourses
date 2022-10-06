/*
 * Manipulation d'un fichier en mode "O_APPEND" (ajout)
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
  char message[100];

  fd = open("message.txt", O_CREAT|O_WRONLY|O_APPEND, S_IRUSR|S_IWUSR);
 
  if (fd <0) {
    perror("Open message.txt");
    exit(1);
  }

  printf("Votre message: ");
  fgets(message, sizeof(message), stdin);
  int size = write(fd, message, sizeof(message));

  printf("Append %d characters in the file message.txt\n", size);

  close(fd);
  return(0);
}
