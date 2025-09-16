#include <stdio.h>

int main() {
	int tableau[4][5];
	for (int i=0; i<4; i++) {
		for (int j=0; j<4; j++) {
			tableau[i][j] = i + j * 2;
		}
	}
	for (int i=0; i<4; i++) {
		for (int j=0; j<4; j++) {
			printf("%d ", tableau[i][j]);	
		}
		printf("\n");
	}
	printf("sizeof(tableau) : %lu\n", sizeof(tableau));
	return 0;

}
