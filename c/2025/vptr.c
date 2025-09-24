#include <stdio.h>

int main() {
	char c = 'a';
	void *vptr = &c;
	printf("cptr : %p\n", vptr);

	int i = 20;
	vptr = &i;
	printf("cptr : %p\n", vptr);

	return 0;
}
