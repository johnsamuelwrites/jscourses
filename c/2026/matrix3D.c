#include <stdio.h>
#include <stdlib.h>

int main() {
    int ***matrix3D;
    int tailleX = 2, tailleY = 3, tailleZ = 4;

    /* Allocation de la première dimension */
    matrix3D = calloc(tailleX, sizeof(int **));

    /* Allocation de la deuxième dimension */
    for (int i = 0; i < tailleX; i++) {
        matrix3D[i] = calloc(tailleY, sizeof(int *));
    }

    /* Allocation de la troisième dimension */
    for (int i = 0; i < tailleX; i++) {
        for (int j = 0; j < tailleY; j++) {
            matrix3D[i][j] = calloc(tailleZ, sizeof(int));
        }
    }

    /* Initialisation */
    for (int i = 0; i < tailleX; i++) {
        for (int j = 0; j < tailleY; j++) {
            for (int k = 0; k < tailleZ; k++) {
                matrix3D[i][j][k] = i + j + k;
            }
        }
    }

    /* Affichage */
    for (int i = 0; i < tailleX; i++) {
        for (int j = 0; j < tailleY; j++) {
            for (int k = 0; k < tailleZ; k++) {
                printf("%d ", matrix3D[i][j][k]);
            }
            printf("\n");
        }
        printf("================\n");
    }

    /* Libération de la mémoire */
    for (int i = 0; i < tailleX; i++) {
        for (int j = 0; j < tailleY; j++) {
            free(matrix3D[i][j]);
        }
        free(matrix3D[i]);
    }
    free(matrix3D);

    return 0;
}