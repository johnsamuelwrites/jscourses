#include <stdio.h>

/*
 * pointeurs génériques (void *)
 */

int main() {
    char a = 'm';
    void *vptr = &a;
    char *cptr = (char *)vptr;
    char b = *(char*) vptr;
    
    printf("Bonjour %c\n", (* (char* )vptr));
    printf("Bonjour %c\n", *cptr);
    printf("Bonjour %c\n", b);
    
    return (0);
}
