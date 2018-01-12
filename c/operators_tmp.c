/*
 *
 * Author: John Samuel
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */


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
