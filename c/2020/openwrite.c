// Travailler avec les fichiers. Ouvrir et
// écrire quelques caractères dans un fichier.

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main() {

  char message[] = "Bonjour le monde!!";

  int fd = open("message.txt", O_WRONLY|O_CREAT, S_IRUSR|S_IWUSR);

  while(1) {
    int taille = write(fd, message, sizeof(message));
    printf("Nombre de caractères: %d\n", taille);
  }

  close(fd);
  return (0);
}
