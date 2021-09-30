#include <stdio.h>

/*
 * chaîne de caractères et pointeurs
 */

int main() {
    char message[2][50] = {"Bonjour", "Programmation en C"};
    char *strptr = message[0];

    printf("Bonjour %s\n", strptr);
    
    strptr = &message[1][3];
    printf("Bonjour %c\n", *strptr);
    strptr = strptr + 2;
    printf("Bonjour %c\n", *strptr);

    return (0);
}
