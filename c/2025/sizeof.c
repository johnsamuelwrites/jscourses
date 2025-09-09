#include <stdio.h>
#include <limits.h>

int main() {
	printf("signed_int %lu octets\n", sizeof(signed int));
	printf("signed_long long int %lu octets\n", sizeof(signed long long int));
	return 0;
}
