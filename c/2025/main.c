#include "operateur.h"
#include <stdio.h>

int main() {
	int num1 = 20, num2 = 30;
	int sum = add(num1, num2);
	printf("Sum (%d, %d) : %d\n", num1, num2, sum);

	return 0;

}
