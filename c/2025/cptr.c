#include <stdio.h>

int main() {
	char c = 'a';
	char *cptr = &c;
	printf("cptr : %p\n", cptr);

	int i = 20;
	cptr = &i;
	printf("cptr : %p\n", cptr);

	return 0;
}
