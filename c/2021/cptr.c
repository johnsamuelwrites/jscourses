#include <stdio.h>

/*
 * utilisation des pointeurs de caractères 
 */

int main() {
    char a = 'm';
    char *cptr = &a;
    
    int annee = 2021;
    cptr = &annee;

    printf("Bonjour %d\n", annee);
    return (0);
}
