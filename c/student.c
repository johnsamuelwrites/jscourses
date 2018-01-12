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
#include "student.h"

void test_different_structures() {
    struct student jim;
    strcpy(jim.first_name, "abc");
    strcpy(jim.last_name, "abc");
    strcpy(jim.street, "abc");
    strcpy(jim.city,"abc");
    jim.notes = 19;

    printf("%s\n", jim.last_name);
    printf("%lu\n", sizeof (struct student));

    struct student2 jean;
    strcpy(jean.first_name, "abc");
    strcpy(jean.last_name, "abc");
    strcpy(jean.address.street, "abc");
    strcpy(jean.address.city,"abc");
    jean.notes = 19;

    printf("%s\n", jean.last_name);
    printf("%lu\n", sizeof (struct student2));

    struct student3 alice;
    strcpy(alice.first_name, "abc");
    strcpy(alice.last_name, "abc");
    strcpy(alice.address.street, "abc");
    strcpy(alice.address.city,"abc");
    alice.notes = 19;

    printf("%s\n", alice.last_name);
    printf("%lu\n", sizeof (struct student3));

    struct student4 elise;
    strcpy(elise.first_name, "abc");
    strcpy(elise.last_name, "abc");
    strcpy(elise.street, "abc");
    strcpy(elise.city,"abc");
    elise.notes = 19;

    printf("%s\n", elise.last_name);
    printf("%lu\n", sizeof (struct student4));

    struct student5 jon;
    strcpy(jon.first_name, "abc");
    strcpy(jon.last_name, "abc");
    strcpy(jon.address_house.house, "abc");
    strcpy(jon.address_house.kingdom, "The North");
    jon.notes = 19;

    printf("%s\n", jon.address_house.kingdom);
    printf("%lu\n", sizeof (struct student5));
}
