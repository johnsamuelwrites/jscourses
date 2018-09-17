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

struct adresse {
  int numero;
  char rue[30];
  char ville[30];
};

typedef short uint16;
typedef int entier;

typedef struct etudiant {
  char nom[30];
  char prenom[30];
  struct adresse a;
  uint16 notes;
} etudiant;



int main() {
  etudiant dupont;
  etudiant etudiants[135];

  dupont.notes = 19;
  strcpy(dupont.nom, "dupont");
  strcpy(dupont.prenom, "Pierre");
  strcpy(dupont.a.rue, "rue abc");
  strcpy(dupont.a.ville, "Lyon");

  printf("%s\n",dupont.a.ville );
}
