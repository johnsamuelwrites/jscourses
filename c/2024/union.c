/*
 * Utilisation d'un union pour stocker des pointeurs vers différentes types de données (char, int, float) dans une structure. 
 * Affiche la valeur d'une donnée stockée dans cette structure en fonction de son type.
 */

#include <stdio.h>
#include <string.h>
struct content{
	char type[8];
	union {
            char *cptr;
            int *iptr;
            float *fptr;
        } ptr;
} content;


void affiche(struct content)  {
    if (strcmp(content.type, "float") == 0) {
       printf("f: %f\n", *content.ptr.fptr);
    }
    else if (strcmp(content.type, "char")==0) {
       printf("c: %c\n", *content.ptr.cptr);
    }
    else if (strcmp(content.type, "int")==0) {
       printf("i: %i\n", *content.ptr.iptr);
    }
}

int main() {
    char c = 'a';
    int i = 10;
    float f = 2.34;

    printf("sizeof(content) : %zu\n", sizeof(content));

    strncpy(content.type, "int", sizeof(content.type));
    content.ptr.iptr = &i;

    affiche(content);
    return(0);
}
