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
  int count = 0;
 
/*  while (count <= 20) {
    printf("%d\n", count);
    count ++;
  }

  printf("============\n");
  count = 20;
  while (count >= 0) {
    printf("%d\n", count);
    count --;
  }

  int a = -1;


  do {
    a++;
    if(a%3 != 0) {
      continue;
    }
    printf("%d\n", a);
  }
  while (a <= 20); */

  int a = -1;
  while (a < 20) {
    a++; 
    if(a%3 == 0) {
    printf("%d\n", a);
    }
    
    //printf("%d\n", a);
  }

  return 0;
}
