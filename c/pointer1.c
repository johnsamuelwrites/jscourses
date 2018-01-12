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
  char a = 'A';
  char * cptr = &a;
 
  printf("%c\n", a);
  printf("%p\n", &a);
  printf("%p\n", cptr);

  short s = 20;
  short *sptr = &s;
  printf("%hhd\n", s);
  printf("%p\n", &s);
  printf("%p\n", sptr);
  
  int i = 24;
  int *iptr = &i;
  printf("%d\n", i);
  printf("%p\n", &i);
  printf("%p\n", iptr);
}
