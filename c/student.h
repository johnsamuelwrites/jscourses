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
