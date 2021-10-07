#include <stdio.h>
#include <stdlib.h>

/*
 * extraire les nombres d'une chaîne de caractères 
 */

int main() {
    int i1, i2;
    float f1;
    char numstr[] = "12 234 3.3445";

    sscanf(numstr, "%d %d %f", &i1, &i2, &f1);
    printf("3 numéros: %d %d %f\n", i1, i2, f1);
    
    return (0);
}
