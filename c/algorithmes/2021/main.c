#include <stdio.h>
#include "operateur.h"

/*
 * utilisation de fichiers d'en-tête (.h)
 */

int main() {
	int num1 = 23, num2 = 56;
	int resultat = add(num1, num2);
	printf("Resultat: %d\n", resultat);

	return 0;
}
