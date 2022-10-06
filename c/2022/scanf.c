/*
 * Utilisation de scanf pour lire les nombres saisis par un utilisateur
 */

#include "function_add.h"
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Numéro 1: ");
    scanf("%d", &num1);
    printf("Numéro 2: ");
    scanf("%d", &num2);

    printf("somme: %d\n", add(num1, num2));

    return (0);
}
