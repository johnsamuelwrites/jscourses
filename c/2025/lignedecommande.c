#include <stdio.h>

int main(int argc, char ** argv) {
	if (argc != 3) {
		printf("Usage : a.out Prénom Nom\n");
		return 1;
	}
	printf("Bonjour ");
	printf("%s ", argv[1]);
	printf("%s !!", argv[2]);
	return 0;
}
