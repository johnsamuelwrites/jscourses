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
  float num1, num2;
  printf("Tapez numéro 1: ");
  scanf("%f", &num1);

  printf("Num 1: %f\n", num1);

  printf("Tapez numéro 2: ");
  scanf("%f", &num2);

  printf("Num 2: %f\n", num2);

  printf("La somme: %f\n", num1 + num2);

  return (0);
}
