#include <stdio.h>
#include <string.h>

int main() {
    char bmessage[] = "Bienvenue à ";
    char emessage[] = "CPE Lyon";

    char message[50];
    strncat(message, bmessage, sizeof(bmessage));
    strncat(message, emessage, sizeof (emessage));

    printf("Message après concatenation: %s\n", message);
    
    strcpy(message, bmessage);
    strcpy(message, emessage);

    printf("Message après copie: %s\n", message);
 
    printf("Comparaison %d\n", strcmp(bmessage, emessage));
    printf("Comparaison %d\n", strcmp(emessage, bmessage));
    return 0;
}