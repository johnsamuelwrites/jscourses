#include <stdio.h>
#include <stdlib.h>

int main() {
    int *tab = calloc(400, sizeof(int));
    if(tab == NULL) {
        perror("Allocation avec calloc");
        return -1;
    } 

    for (int i = 0; i< 400 ; i++) {
        tab[i] = i*2;
    }

    for (int i = 0; i< 400 ; i++) {
        printf("%d ", tab[i]);
    }

    printf("\n");
    free(tab);
    tab = NULL;

    return (0);
}