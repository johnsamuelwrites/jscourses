#include <stdio.h>

int main() {
	int tableau[20];
	for (int i=0; i<20; i++) {
		tableau[i] = i * 2;
	}
	for (int i=0; i<20; i++) {
		printf("%d\n", tableau[i]);	
	}
	printf("sizeof(tableau) : %lu\n", sizeof(tableau));
	return 0;

}
