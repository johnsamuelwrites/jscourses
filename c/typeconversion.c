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
  unsigned short s = 20;
  unsigned int i;

  i = 0xffffff00;
  s = i;

  s = 20;
  float f = i;
  printf("%u %f\n",i,f);
  i = f;
  printf("%u %f\n",i,f);
  printf("%d\n",i==f);

  void *ptr1 = &i;
  void *ptr2 = &s;
  printf("%p\n", ptr1);
  printf("%p\n", ptr1+1);
  printf("%p\n", ptr1+2);

  unsigned int y = 0xffffff;
  unsigned short j = y;
  printf("%hx\n", j);

  float g = 30.999;
  unsigned short l = (int)g;
  printf("%hd\n", l);

  char a = 'a';
  char b = 'b';

  char *cptr = &a;
  void *vptr = &b;

  cptr = (char *)vptr;
}
