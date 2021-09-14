#include <stdio.h>
#include <limits.h>

/* afficher la valeur minimale et la valeur maximale 
 * d'une variable caractère.
 */

int main() {
    printf("MIN (signed char): %d  MAX (signed char): %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("MIN (unsigned char): %d  MAX (unsigned char): %d\n", 0, UCHAR_MAX);
    return (0);
}
