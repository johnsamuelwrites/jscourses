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
#ifndef __STUDENT_H__
#define __STUDENT_H__

struct address {
    char street[30];
    char city[30];
};

struct student {
    char first_name[30];
    char last_name[30];
    char street[30];
    char city[30];
    short notes;
};

struct student2 {
    char first_name[30];
    char last_name[30];
    struct address address;
    short notes;
};

struct student3 {
    char first_name[30];
    char last_name[30];
    struct {
        char street[30];
        char city[30];
    } address;
    short notes;
};

struct student4 {
    char first_name[30];
    char last_name[30];
    struct {
        char street[30];
        char city[30];
    };
    short notes;
};


struct student5 {
    char first_name[30];
    char last_name[30];
    union {
        struct {
           char street[30];
           char city[30];
        } address_city;
        struct {
           char house[30];
           char kingdom[30];
        } address_house;
    };
    short notes;
};

void test_different_structures();

#endif
