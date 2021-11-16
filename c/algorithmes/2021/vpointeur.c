// affiche "bonjour"
//
#include <stdio.h>

/* fonction main
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
