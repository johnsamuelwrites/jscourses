//
#include <stdio.h>

/* fonction main
 */
int main() {
	char message[2][11] = {
	    "Bonjour",	
	    "Le Monde"
	};
	for (int i = 0; i < 2; i++) {
	   for (int j = 0; j < 11; j++) {
	     printf("%c", message[i][j]);
	   }
	   printf("\n");
	}
	for (int i = 0; i < 2; i++) {
	   printf("%s", message[i]);
	   printf("\n");
	}

	return (0);
}
