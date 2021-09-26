#include <stdio.h>

/*
 * variables pointeurs 
 */

int main() {
    int annee = 2021;
    int *addrannee = &annee;

    printf("annne: %d\n", annee);
    printf("addrannee: %p\n", addrannee);

    short sannee = 2021;
    short *saddrannee = &sannee;

    printf("annne: %hd\n", sannee);
    printf("addrannee: %p\n", saddrannee);
    return (0);
}
