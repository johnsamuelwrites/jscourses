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
  int a = 20;
  int b = 20;
  printf("a: %d\t b:%d\n", a, b);

  printf("a > b: %d \n", a > b);
  printf("a < b: %d \n", a < b);

  if ( a < b ) {
    printf("a est inférieur à b \n");
  }
  else if ( a > b ) {
    printf("a est supérieur à b \n");
  }

  return(0);
}
