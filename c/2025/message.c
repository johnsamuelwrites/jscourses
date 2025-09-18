#include <stdio.h>
#include <string.h>

int main() {
	char message[50];
	printf("Tapez votre nom : ");
	fgets(message, sizeof(message), stdin);
	printf("Bonjour %s\n", message);

	printf("sizeof(message) %lu\n", sizeof(message));
	printf("taille(message) %lu\n", strlen(message));

	message[strlen(message)-1] = '\0';
	printf("sizeof(message) %lu\n", sizeof(message));
	printf("taille(message) %lu\n", strlen(message));
	return 0;
}
