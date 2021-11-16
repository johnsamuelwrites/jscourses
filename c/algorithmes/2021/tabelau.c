#include <stdio.h>

/* 
 * l'utilisation de tableaux à deux dimensions.
 */
int main() {
	int salles[2][3] = {
		{201, 202, 203},
		{301, 302, 303},
	};
	for (int i = 0; i < 2; i++) {
	   for (int j = 0; j < 3; j++) {
	     printf("%d ", salles[i][j]);
	   }
	   printf("\n");
	}

	int salles_batimentb[][3] = {
		{401, 402, 403},
		{301, 302, 303},
	};

	return (0);
}
