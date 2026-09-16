#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc < 3 ) {
        printf("usage: ./a.out entier1 entier2\n");
        return -1;
    }

    printf("Somme: ");
    int val1 = atoi(argv[1]);
    int val2 = atoi(argv[2]);
 
    int resultat = val1 + val2;
    printf("Résultat: %i", resultat);
    printf("\n");
    return 0;
}