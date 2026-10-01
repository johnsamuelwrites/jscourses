#include <stdio.h>

void affichage_et_modifier(char message[10]) {
    printf("message dans la fonction-affichage_et_modifier: %s\n", message);
    message[0] = 'b';
}

int main() {
    char message[10] = "Bonjour";
    printf("Avant affichage_et_modifier: message = %s\n", message);
    affichage_et_modifier(message); 
    printf("Après affichage_et_modifier: message = %s\n", message);

    return 0;
}