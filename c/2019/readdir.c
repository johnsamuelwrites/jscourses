/* 
 * Lecture d'un répertoire
 */

#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>


int main(int argc, char **argv) {
  
  DIR *dirp = opendir(argv[1]);
  if (dirp == NULL) {
    perror("opendir: ");
    return(EXIT_FAILURE);
  }

  struct dirent *ent;
  while(1) {
    ent = readdir(dirp);
    if(ent == NULL) {
      break;
    }

    printf("%s\n", ent->d_name);
  }

  closedir(dirp);
  return(0);
}
