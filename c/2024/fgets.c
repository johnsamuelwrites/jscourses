#include <stdio.h>

int main() {
	char nom[50];
	printf("Tapez votre nom: ");
	fgets(nom, sizeof(nom), stdin);
	printf("Nom: %s\n", nom);
	return 0;
}

