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
typedef int integer;

  struct adresse{
    char rue[10];
    char ville[10];
  };

typedef struct etudiant {
  char name[30];
  short notes;
  struct adresse adresse;
} etudiant;

struct etudiant2 {
  char name[30];
  struct {
    char rue[10];
    char ville[10];
  };
  short notes;
};

int main() {
  
  integer i = 10;
  etudiant dupont;
  strcpy(dupont.adresse.rue, "rue");
  printf("%d", i);
}
