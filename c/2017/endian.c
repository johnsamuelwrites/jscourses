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
  float a = 2;
 
  char *ptr = (char *) &a;

  printf("byte 0: %hhx\n", *(ptr));
  printf("byte 1: %hhx\n", *(ptr+1));
  printf("byte 2: %hhx\n", *(ptr+2));
  printf("byte 3: %hhx\n", *(ptr+3));

  a = 1;

  printf("byte 0: %hhx\n", *(ptr));
  printf("byte 1: %hhx\n", *(ptr+1));
  printf("byte 2: %hhx\n", *(ptr+2));
  printf("byte 3: %hhx\n", *(ptr+3));

  printf("%p %p\n", ptr, &a);

  double d = 1;
  ptr = (char *) &d;

  printf("byte 0: %hhx\n", *(ptr));
  printf("byte 1: %hhx\n", *(ptr+1));
  printf("byte 2: %hhx\n", *(ptr+2));
  printf("byte 3: %hhx\n", *(ptr+3));
  printf("byte 4: %hhx\n", *(ptr+4));
  printf("byte 5: %hhx\n", *(ptr+5));
  printf("byte 6: %hhx\n", *(ptr+6));
  printf("byte 7: %hhx\n", *(ptr+7));

  d = 2;
  ptr = (char *) &d;

  printf("byte 0: %hhx\n", *(ptr));
  printf("byte 1: %hhx\n", *(ptr+1));
  printf("byte 2: %hhx\n", *(ptr+2));
  printf("byte 3: %hhx\n", *(ptr+3));
  printf("byte 4: %hhx\n", *(ptr+4));
  printf("byte 5: %hhx\n", *(ptr+5));
  printf("byte 6: %hhx\n", *(ptr+6));
  printf("byte 7: %hhx\n", *(ptr+7));

  printf("%p %p\n", ptr, &d);
  printf("%p %p\n", ptr, &d);

  float *fpt = &a;
  printf("%p %p\n", fpt, &a);
  fpt++;
  printf("%p %p\n", fpt, &a);

  double *dpt = &d;
  printf("%p %p\n", dpt, &d);
  dpt--;
  printf("%p %p\n", dpt, &d);
  return(0);
}
