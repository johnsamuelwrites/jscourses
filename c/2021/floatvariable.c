#include <stdio.h>

/*
 * afficher les valeurs des variables de type 'float' 
 */

int main() {
    float pi = 3.14;
    printf("Bonjour %f\n", pi);
    printf("Bonjour %.2f\n", pi);
    printf("Bonjour %2.2f\n", pi);
    return (0);
}
