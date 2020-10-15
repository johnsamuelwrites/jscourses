/* 
 * Travailler avec les fichiers. Ouvrir et lire
 * des caractères d'un fichier. L'utilisation de
 * la fonction perror afin d'afficher les erreurs
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main() {

  char c;

  int fd = open("bonjour.c1", O_RDONLY);
  if (fd == -1) {
    perror("Erreur: ");
    return(1);
  }

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
