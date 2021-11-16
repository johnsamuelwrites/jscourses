#include <stdio.h>

/* 
 * les pointeurs et les opérateurs associés
 */
int main() {
        int i = 20;
        int *iaddr = &i;

	printf("adresse(i): %p\n", iaddr);
	printf("valeur à l'adresse(i): %d\n", *iaddr);
	printf("i: %d\n", i);

	*iaddr = 5;
	*iaddr = *iaddr + 2;
	printf("valeur à l'adresse(i): %d\n", *iaddr);
	printf("i: %d\n", i);

	return (0);
}
