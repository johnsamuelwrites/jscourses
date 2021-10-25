#include <stdio.h>

/*
 * afficher un message et la valeur d'une variable
 */
#define PI 3.14
#define carre(valeur) valeur * valeur

int main() {
    int annee = 2021;
    printf("Bonjour %f\n", PI);
    printf("Bonjour %f\n", PI * carre(annee));
    return (0);
}
