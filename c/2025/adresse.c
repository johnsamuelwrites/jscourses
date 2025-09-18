#include <stdio.h>

int main() {
	char ch = 'a';
	char *addr_ch = &ch;

	printf("ch : %c\n", ch);
	printf("&ch : %p\n", &ch);
	printf("addr_ch : %p\n", addr_ch);
	printf("*addr_ch : %c\n", *addr_ch);

	short s = 10;
	short *addr_s = &s;

	printf("s : %hd\n", s);
	printf("&s : %p\n", &s);
	printf("addr_s : %p\n", addr_s);
	printf("*addr_s : %hd\n", *addr_s);

	int i = -210;
	int *addr_i = &i;

	printf("i : %d\n", i);
	printf("&i : %p\n", &i);
	printf("addr_i : %p\n", addr_i);
	printf("*addr_i : %d\n", *addr_i);
	return 0;
}
