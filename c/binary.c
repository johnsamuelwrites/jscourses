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
  int a = 0b01000100;
  int b = 0b00010000;
  int c = 0b01000000;
  int d = 0b11000100;
  printf("a: %x\n", a);
  printf("~a: %x\n", ~a);
  printf("a & 0x4: %x\n", a&0x4);
  printf("a & b: %x\n", a&b);
  printf("a & c, c: %x %x\n", a&c, c);
  printf("a & d, d: %x %x\n", a&d, d);
 
  return(0);
}
