#include <stdio.h>
#include "size.h"
#include "operators.h"

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
  return (0);
}
