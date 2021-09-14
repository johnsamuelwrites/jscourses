#include <stdio.h>

/*
 * utilisation des variables de type 'enum'
 */

// un commentaire
int main() {
    enum status1 {ELEVE, STAGIAIRE};
    enum status1 s1 = ELEVE;

    printf("Bonjour %d\n", s1);

    enum status2 {ELEVE1=11, STAGIAIRE1=10, PERSONNEL};
    enum status2 s2 = ELEVE1;

    printf("Bonjour %d\n", s2);
    
    s2 = STAGIAIRE1;

    printf("Bonjour %d\n", s2);

    s2 = PERSONNEL;

    printf("Bonjour %d\n", s2);
    return (0);
}
