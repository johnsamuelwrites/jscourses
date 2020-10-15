/*
 * L'utilisation des fonctions pour ouvrir et lire un
 * répertoire
 */

#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

int main(int argc, char**argv) {
  if(argc != 2) {
    printf("usage: opendir nomdir\n");
    return(1);
  }

  DIR *dirp = opendir(argv[1]);
  if (dirp == NULL) {
    perror("Erreur: ");
    return(1);
  }

  struct dirent *ent;
  while(1) {
    ent = readdir(dirp);
    if (ent == NULL) {
      break;
    }

    printf("%s\n", ent->d_name);
  }
  closedir(dirp);
  return (0);
}
