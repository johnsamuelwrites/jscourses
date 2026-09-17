#include <stdio.h>

int main() {
    int tableau[100];

    for (long unsigned int compteur = 0; compteur < sizeof(tableau); compteur++) {
        tableau[compteur] = compteur;
    }

    return (0);
}