#include <stdio.h>

int main() {
	char message[10] = "Bonjour";

	for (int i=0; i<10; i++) {
		printf("%c\n", message[i]); 
	}

	int i = 0;
	while (message[i] != '\0') {
		printf("%c\n", message[i]); 
		i++;
	}
	printf("sizeof(message): %lu\n", sizeof(message));
	printf("message : %s\n", message);
	return 0;

}
