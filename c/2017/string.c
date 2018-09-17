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
#include <string.h>

int main() {
  char message[20] = "Bonjour ";

  printf("size en utilisant strlen: %lu\n", strnlen(message, 19));
  printf("size en utilisant sizeof: %lu\n", sizeof(message));

  char name [10];
  strncpy(name, "Pierre", 9);
  name[6] = '\0';
  printf("Name: %s\n", name);

  strncat(message, name, 19);  

  printf("Message: %s\n", message);
  return(0);
}
