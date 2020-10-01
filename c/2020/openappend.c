// Travailler avec les fichiers. Ouvrir et écrire ou
// ajouter des caractères à un fichier.

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

int main() {

  char message[100];
  printf("Votre message:\n");
  fgets(message, sizeof(message), stdin);

  int fd = open("message.txt", O_WRONLY|O_CREAT|O_APPEND, S_IRUSR|S_IWUSR);
  int taille = write(fd, message, strlen(message));
  printf("Nombre de caractères: %d\n", taille);

  close(fd);
  return (0);
}
