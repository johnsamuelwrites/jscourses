#include <stdio.h>

int main(int argc, char **argv) {
    if (argc < 2 ) {
        printf("usage: ./a.out nom\n");
        return -1;
    }

    printf("Bonjour ");
    for (int i = 1; i < argc; i++) {
        printf("%s ", argv[i]);
    }
    printf("\n");
    return 0;
}