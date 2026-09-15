#include <stdio.h>
#include <string.h>

struct adresse {
    char rue[30];
    char ville[30];
    int codepostale;
};

struct eleve{
    char prenom[30];
    char nom[30];
    struct adresse adresse;
    float note;
};

int main() {
    struct eleve dupont;
    strcpy(dupont.nom, "Dupont");
    dupont.note = 19.5;

    printf("Elève 1\n");
    printf("%s : %f\n", dupont.nom, dupont.note);

    return 0;
}