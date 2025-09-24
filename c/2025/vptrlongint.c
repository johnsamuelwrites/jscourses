#include <stdio.h>

int main() {
	long int a = 0x6423abff;
	printf("a : %lx\n", a);

	void *vptr = &a;
	char *cptr = (char *) vptr;

	printf("cptr 0: %hhx\n", *cptr);
	printf("cptr 1: %hhx\n", *(cptr+1));
	printf("cptr 2: %hhx\n", *(cptr+2));
	printf("cptr 3: %hhx\n", *(cptr+3));

	printf("cptr 0: %hhu\n", *cptr);
	printf("cptr 1: %hhu\n", *(cptr+1));
	printf("cptr 2: %hhu\n", *(cptr+2));
	printf("cptr 3: %hhu\n", *(cptr+3));

	printf("cptr 0: %hhx\n", *cptr&0x0f);
	printf("cptr 0: %hhx\n", (*cptr&0xf0)>>4);
	return 0;
}
