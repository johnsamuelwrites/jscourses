#include <stdio.h>
#include <stdlib.h>

/*
 * utilisation de la fonction 'atoi' pour la conversion d'une chaîne de caractères en un nombre entier. 
 */

int main() {
    long int li;
    int i;
    long long int lli;
    char numstr[] = "1234578739379999";
    printf("Bonjour %d\n", atoi(numstr));
    printf("Bonjour %ld\n", atol(numstr));
    printf("Bonjour %lld\n", atoll(numstr));

    i = atoi(numstr);
    li = atol(numstr);
    lli = atoll(numstr);

    printf("Bonjour %d\n", i);
    printf("Bonjour %ld\n", li);
    printf("Bonjour %lld\n", lli);

    printf("Bonjour %s\n", numstr);
    return (0);
}
