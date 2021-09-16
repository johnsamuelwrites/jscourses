#include <stdio.h>

/*
 * utilisation de la notation hexadécimale 
 */

int main() {
    int variable = 0b100101;
    printf("variable (hex) %x\n", variable);
    
    variable = 0x23af;
    printf("variable (hex) %x\n", variable);
    printf("variable %d\n", variable);
    return (0);
}
