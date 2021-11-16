#include <stdio.h>

/*
 * pointeurs génériques (void*)
 */
int main() {
        char c = 'a';
	int i = 10;

	void *vaddr = &c;
	vaddr = &i;

	int *iaddr;
	iaddr = (int *) vaddr;
	return (0);
}
