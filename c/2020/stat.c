/*
 * L'utilisation de la fonction stat afin
 * d'afficher la taille d'un fichier
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
 struct stat stbuf;
 stat("funcptr.c", &stbuf);
 printf("Taille: %ld\n", stbuf.st_size);
 return(0);
}
