#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * allocation dynamique de mémoire en utilisant 'calloc' 
 */

int main() {
    char *content; 

    int taille;
    printf("La taille?\n");
    scanf("%d", &taille);

    content = calloc(taille, sizeof(char));
    if (content != NULL) {
	    strncat(content, "Bonjour", taille);
	    printf("Message: %s\n", content);
	    free(content);
    }
    return (0);
}
