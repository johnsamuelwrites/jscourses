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

struct color1 {
  unsigned char red;
  unsigned char green;
  unsigned char blue;
  unsigned int count;
};

struct color2 {
  unsigned char red;
  unsigned int count;
  unsigned char green;
  unsigned char blue;
};

#pragma pack(push)
#pragma pack(1)
struct color3 {
  unsigned char red;
  unsigned int count;
  unsigned char green;
  unsigned char blue;
};
#pragma pack(pop)

int main() {
  printf("size- color1: %lu, color2: %lu\n", 
    sizeof(struct color1),
    sizeof(struct color2));

  printf("size- color3: %lu\n", 
    sizeof(struct color3));

  return (0);
}
