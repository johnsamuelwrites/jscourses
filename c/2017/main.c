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


#include <stdio.h>
#include "size.h"
#include "operators.h"
#include "student.h"

void print_octal() {
  int value = 0b10100100;

  printf("octal value: %o\n", value); 
}

void print_hexadecimal() {
  int value = 0b10100100;

  printf("hexadecimal value: %x\n", value); 
}

void print_hello() {
  printf("Hello World!\n");
}

int main() {
  print_hello();

  printf("\n");
  print_sizeof_data_types();

  printf("\n");
  print_sizeof_variables();

  printf("\n");
  print_variables();

  printf("\n");
  print_octal();

  printf("\n");
  print_hexadecimal();

  printf("\n");
  print_result_relational_operators();

  printf("\n");
  print_result_logical_operators();

  printf("\n");
  print_result_increment_decrement_operators();

  printf("\n");
  print_result_bitwise_operators();

  printf("\n");
  test_different_structures();
  return (0);
}
