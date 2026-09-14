#include <stdio.h>

int main() {
    int annee = 2026;
    float pi = 3.14;
    double dval = 2345.1122242;
    printf("Bonjour PLP 2026-27!\n");
    printf("Message: %d\n", annee);

    printf("pi: %f; dval: % lG\n", pi, dval);

    char c = 'A';
    printf("c: %c\n", c);

    char message[10] = "Bonjour";
    printf("message: %s\n", message);
    printf("message: %c\n", message[3]);
    return 0;
}