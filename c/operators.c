#include "operators.h"
#include <stdio.h>

void print_result_relational_operators() {
    int a = 20, b = 10;
    
    printf("a < b : %d\n", a < b);
    printf("a <= b : %d\n", a <= b);
    printf("a > b : %d\n", a > b);
    printf("a >= b : %d\n", a >= b);
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
}

void print_result_logical_operators() {
    int a = 20, b = 0;
    printf("!a : %d\n", !a);
    printf("a && b : %d\n", a && b);
    printf("a || b: %d\n", a || b);
}

void print_result_increment_decrement_operators() {
    int a = 20, b = 0;

    a = 20, b = 0;
    b = a++;
    printf("a: %d, b : %d\n", a, b);

    a = 20, b = 0;
    b = ++a;
    printf("a: %d, b : %d\n", a, b);

    a = 20, b = 0;
    b = a--;
    printf("a: %d, b : %d\n", a, b);

    a = 20, b = 0;
    b = --a;
    printf("a: %d, b : %d\n", a, b);

}

void print_result_bitwise_operators() {
    int a = 0b01000100;
    
    printf("~a : %x\n", ~a);
    printf("a & 0x4 : %x\n", a&0x4);
    printf("a | 0x2: %x\n", a|0x2);
    printf("a ^ 0x4: %x\n", a^0x4);
    printf("a << 1: %x\n", a << 1);
    printf("a >> 1: %x\n", a >> 1);
}
