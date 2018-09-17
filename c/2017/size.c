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


#include "size.h"
#include <stdio.h>


void print_variables() {
  char my_char_var= 'a';
  unsigned char my_uchar_var = 'b';

  short my_short_var = -12;
  unsigned short my_ushort_var = 12;
  
  int my_int_var = -12;
  unsigned int my_uint_var = 12;

  long int my_long_int_var = -12L;
  unsigned long int my_ulong_int_var = 12UL;

  long long int my_long_long_int_var = -12LL;
  unsigned long long int my_ulong_long_int_var = 12ULL;

  float my_float_var = 12e-3;

  double my_double_var = 12e-3L;
  long double my_long_double_var = 12e-3L;

  enum status {STUDENT, INTERN};
  enum status my_enum_var = STUDENT;

  printf("my_char_var: %c\n", my_char_var); 
  printf("my_uchar_var: %hhu\n", my_uchar_var); 

  printf("my_short_var: %hd\n", my_short_var); 
  printf("my_ushort_var: %hu\n", my_ushort_var); 

  printf("my_int_var: %d\n", my_int_var); 
  printf("my_uint_var: %u\n", my_uint_var); 

  printf("my_long_int_var: %ld\n", my_long_int_var); 
  printf("my_ulong_int_var: %lu\n", my_ulong_int_var); 

  printf("my_long_long_int_var: %lld\n", my_long_long_int_var); 
  printf("my_ulong_long_int_var: %llu\n", my_ulong_long_int_var); 

  printf("my_float_var: %f\n", my_float_var); 

  printf("my_double_var: %G\n", my_double_var); 
  printf("my_long_double_var: %Lf\n", my_long_double_var); 

  printf("my_enum_var: %u\n", my_enum_var); 
}

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
  long double my_long_double_var;

  enum status {STUDENT, INTERN};

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
  printf("sizeof(my_long_double_var): %lu\n", sizeof(my_long_double_var)); 
}

void print_sizeof_data_types() {
  enum status {STUDENT, INTERN};

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
  printf("sizeof(double): %lu\n", sizeof(long double)); 

  printf("sizeof(enum status): %lu\n", sizeof(enum status)); 
}

