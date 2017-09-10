#include <stdio.h>

void print_sizeof_variables() {
  char my_char_var;
  unsigned char my_uchar_var;

  short my_short_var;
  unsigned short my_ushort_var;
  
  int my_int_var;
  unsigned int my_uint_var;

  long int my_long_int_var;
  unsigned long int my_ulong_int_var;

  long long int my_long_long_int_var;
  unsigned long long int my_ulong_long_int_var;

  float my_float_var;
  double my_double_var;

  printf("sizeof(my_char_var): %lu\n", sizeof(my_char_var)); 
  printf("sizeof(my_uchar_var): %lu\n", sizeof(my_uchar_var)); 

  printf("sizeof(my_short_var): %lu\n", sizeof(my_short_var)); 
  printf("sizeof(my_ushort_var): %lu\n", sizeof(my_ushort_var)); 

  printf("sizeof(my_int_var): %lu\n", sizeof(my_int_var)); 
  printf("sizeof(my_uint_var): %lu\n", sizeof(my_uint_var)); 

  printf("sizeof(my_long int_var): %lu\n", sizeof(my_long_int_var)); 
  printf("sizeof(my_ulong_int_var): %lu\n", sizeof(my_ulong_int_var)); 

  printf("sizeof(my_long_long_int_var): %lu\n", sizeof(my_long_long_int_var)); 
  printf("sizeof(my_ulong_long_int_var): %lu\n", sizeof(my_ulong_long_int_var)); 

  printf("sizeof(my_float_var): %lu\n", sizeof(my_float_var)); 

  printf("sizeof(my_double_var): %lu\n", sizeof(my_double_var)); 
}

void print_sizeof_data_types() {
  printf("sizeof(char): %lu\n", sizeof(char)); 
  printf("sizeof(unsigned char): %lu\n", sizeof(unsigned char)); 

  printf("sizeof(short): %lu\n", sizeof(short)); 
  printf("sizeof(unsigned short): %lu\n", sizeof(unsigned short)); 

  printf("sizeof(int): %lu\n", sizeof(int)); 
  printf("sizeof(unsigned int): %lu\n", sizeof(unsigned int)); 

  printf("sizeof(long int): %lu\n", sizeof(long int)); 
  printf("sizeof(unsigned long int): %lu\n", sizeof(unsigned long int)); 

  printf("sizeof(long long int): %lu\n", sizeof(long long int)); 
  printf("sizeof(unsigned long long int): %lu\n", sizeof(unsigned long long int)); 

  printf("sizeof(float): %lu\n", sizeof(float)); 

  printf("sizeof(double): %lu\n", sizeof(double)); 
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

  return (0);
}
