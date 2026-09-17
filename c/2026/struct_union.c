#include <stdio.h>

struct point3d_struct {
    int valeurs[3];
    struct {
        int x, y, z;
    };
};

union point3d_union {
    int valeurs[3];
    struct {
        int x, y, z;
    };
};

int main() {
    struct point3d_struct p3ds;
    union point3d_union p3du;

    printf("point3d_struct -p3ds %zu\n", sizeof(p3ds));
    printf("point3d_union -p3du %zu\n", sizeof(p3du));
    return (0);
}