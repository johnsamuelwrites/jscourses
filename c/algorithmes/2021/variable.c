#include <stdio.h>

/* 
 * utilisation de variables de différents types de données 
 */
int main() {
	int annee = 2021;
	short mois = 9;
	short jour = 25;
	printf("Bonjour %d-%hd-%hd\n", annee, mois, jour);
	printf("Bonjour %d/%hd/%hd\n", annee, mois, jour);
	return (0);
}
