#include <stdio.h>
#include <stdlib.h>

int main() {
    int taille = 0;
    printf("Taille maximale de votre tableau: ");
    scanf("%d", &taille);

    int *tableau = calloc(taille, sizeof(int));
    if (tableau == NULL) {
        perror("Allocation du mémoire");
        return -1;
    }

    for (int i = 0; i< taille; i++) {
        tableau[i] = i * 2;
    }

    for (int i = 0; i< taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    free(tableau);
    return 0;
}