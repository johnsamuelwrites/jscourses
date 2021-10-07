#include <stdio.h>
#include <stdlib.h>

/*
 * interactions avec l'utilisateur 
 */

int main() {
    int i1, i2;
    float f1;

    printf("Tapez 3 numéros (entier entier réel): \n");
    scanf("%d", &i1);
    scanf("%d", &i2);
    scanf("%f", &f1);
    printf("3 numéros: %d %d %f\n", i1, i2, f1);
    
    return (0);
}
