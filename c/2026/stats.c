#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc< 2) {
        printf("Usage: stats fichier\n");
        return(-1);
    }

    struct stat sf;
    int statut = stat(argv[1], &sf);

    if (statut == -1) {
        perror("Stats");
        return(-1);
    }

    printf("Taille : %ld\n", sf.st_size);
    return 0;
}