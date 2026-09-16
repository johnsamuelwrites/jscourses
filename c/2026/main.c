#include <stdio.h>
#include "operateurs.h"

int main() {
    int val1, val2;
    printf("Tapez deux numéros");
    scanf("%d%d", &val1, &val2);

    int result = add(val1, val2);
    printf("Résultat: %d\n", result);

    return 0;
}