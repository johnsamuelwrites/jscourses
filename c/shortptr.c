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
   short s[4] = {0x65ff, 0xa478};

   printf("%hx\n", s[1]);
   printf("%hx\n", *(s+1));

   short *sptr = s;
   printf("%hx\n", *(sptr+1));

   short *sptr2 = s;
   int *iptr;
   printf("%ld\n", sptr2-iptr);
}
