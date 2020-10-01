// Travailler avec les fichiers. Ouvrir et lire
// des caractères d'un fichier.

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main() {

  char c;

  int fd = open("bonjour.c", O_RDONLY);

  while(1) {
    int taille = read(fd, &c, sizeof(c));
    if(taille < 1 ) { //plus de caractères
      break;
    }
    printf("%c", c);
  }

  close(fd);
  return (0);
}
