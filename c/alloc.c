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
#include <stdlib.h>

int main(){
  int *itab = (int *) malloc(10 * sizeof(int));
  short *stab = (short *) malloc (10 * sizeof(short));

  long int *litab = (long int *) malloc (10 * sizeof(long int));
  long int *litab = (long int *) malloc (100);

  printf("%d\n", itab[5]);
  free(itab);

  itab = (int *) calloc(10,  sizeof(int));
  printf("%d\n", itab[5]);
  free(itab);
} 
