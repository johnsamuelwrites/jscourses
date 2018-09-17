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
 
  enum status {ETUDIANT=1, STAGIAIRE, PROF};

  enum status s = 30;


  switch( s ) {
     case STAGIAIRE:
          printf("s: stagiare\n");
          break;
     case ETUDIANT:
          printf("s: étudiant\n");
          break;
     case PROF:
          printf("s: professeur\n");
          break;
     default: 
          printf("ERREUR!!!!!!!!!");
          break;
  }

  return(0);
}
