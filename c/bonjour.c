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

int main() {
  int year = 2017;
  printf("char: %lu\n", sizeof(char));
  printf("long long int: %lu\n", sizeof(long long int));
  printf("float: %lu\n", sizeof(float));
  printf("double: %lu\n", sizeof(double));
  printf("long double: %lu\n", sizeof(long double));
  
  double pi = 3.14;
  printf("pi= %g\n", pi);
  return (0);
}
