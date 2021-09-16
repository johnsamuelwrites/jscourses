#include <stdio.h>

/*
 * les opérateurs de manipulation de bits (<<, >>, <<=, >>=) 
 */

int main() {
    int a = 2;
    printf("a %d\n", a << 2);
    printf("a %d\n", a << 4);
    printf("a %d\n", a >> 4);
    printf("a %d\n", a >> 2);
    
    a = 2;
    printf("a %d\n", a <<= 2);
    printf("a %d\n", a <<= 4);
    printf("a %d\n", a >>= 4);
    printf("a %d\n", a >>= 2);
    return (0);
}
