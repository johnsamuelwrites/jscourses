#include <stdio.h>

/*
 * afficher les valeurs des variables de type 'float' 
 */

int main() {
    float pi = 3.14;
    printf("pi %f\n", pi);
    printf("pi %.2f\n", pi);
    printf("pi %2.2f\n", pi);
 
    float valeur = 12345.6789;
    printf("valeur :%f\n", valeur);
    printf("valeur :%1.2f\n", valeur);
    printf("valeur :%2.2f\n", valeur);
    printf("valeur :%3.2f\n", valeur);
    printf("valeur :%4.2f\n", valeur);
    printf("valeur :%5.2f\n", valeur);
    printf("valeur :%6.2f\n", valeur);
    printf("valeur :%7.2f\n", valeur);
    printf("valeur :%8.2f\n", valeur);
    printf("valeur :%9.2f\n", valeur);
    printf("valeur :%9.3f\n", valeur);
    printf("valeur :%14.4f\n", valeur);

    return (0);
}
