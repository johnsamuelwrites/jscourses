/*
 * L'utilisation de la fonction stat afin
 * d'afficher la taille d'un fichier
 * L'utilisation de la fonction perror pour
 * afficher les erreurs
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
 struct stat stbuf;
 int status = stat("funptr.c", &stbuf);

 if (status == -1) {
   perror("Erreur: ");
   return(1);
 }
 printf("Taille: %ld\n", stbuf.st_size);
 return(0);
}
