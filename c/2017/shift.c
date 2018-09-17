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
  int a = 0x8;
  printf("a >> 1: %x\n", a >> 1);
  a = a >> 1;
  printf("a >> 1: %x\n", a >> 1);
  a = a >> 1;
  printf("a >> 1: %x\n", a >> 1);
  a = a >> 1;
  printf("a >> 1: %x\n", a >> 1);
  a = a >> 1;

  a = 0x8;
  printf("a >> 4: %x\n", a >> 4);
 
  return(0);
}
