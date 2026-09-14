#include <stdio.h>
#include "addition.h"

int main() {
    
    int var1 = 0, var2 = 0;

    printf("Tapez deux entiers: ");
    scanf("%i%i", &var1, &var2);

    int resultat = addition(var1, var2);
    printf("Résultat: %i\n", resultat);

    return 0;
}