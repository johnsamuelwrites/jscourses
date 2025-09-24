#include <stdio.h>

int main() {
	char c = 'a';
	char *cptr = &c;
	char **cptrcptr = &cptr;
	printf("c : %c\n", c);
	printf("cptr : %p\n", cptr);
	printf("cptrcptr : %p\n", cptrcptr);

	printf("c : *cptr : %c\n", *cptr);
	printf("c : **cptrcptr : %c\n", **cptrcptr);

	return 0;
}
