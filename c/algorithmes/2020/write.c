/*
 * écriture dans un fichier
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


int main() {
  char message1[] = "Hello";
  char message2[] = " World";

  int fd = open("message.txt", O_CREAT|O_WRONLY, S_IRUSR|S_IWUSR);

  if (fd < 0) {
    printf("Erreur\n");
    return(1);
  } 

  int taille = write(fd, message1, sizeof(message1));
  taille = write(fd, message2, sizeof(message2));

  close(fd); 
  return(0);
}
