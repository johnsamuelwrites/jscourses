/* C89 : commentaires de bloc, declarations en debut de bloc, prototype. */
#include <stdio.h>

int addition(int a, int b);

int main(void)
{
    int a = 2;
    int b = 3;
    int resultat;

    resultat = addition(a, b);
    printf("Somme : %d\n", resultat);
    return 0;
}

int addition(int a, int b)
{
    return a + b;
}
