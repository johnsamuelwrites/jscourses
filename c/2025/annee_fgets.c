#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char message[50];
	int annee;
	printf("Année ? ");
	fgets(message, sizeof(message), stdin);
	printf("C'est l'année %s\n", message);

	annee = atoi(message);
	printf("C'est l'année %d\n", annee);
	return 0;
}
