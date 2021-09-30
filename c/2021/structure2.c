#include <stdio.h>
#include <string.h>

/*
 * l'utilisation des structures (struct) 
 */

int main() {

    struct eleve {
	  char nom[30];
	  char prenom[30];
	  char adresse[30];
	  short notes[2];
    };

    struct eleve cpe_eleve[2];

    strcpy(cpe_eleve[0].nom,"Dupont");
    strcpy(cpe_eleve[0].prenom, "Pierre");
    strcpy(cpe_eleve[0].adresse, "Villeurbanne");
    cpe_eleve[0].notes[0] = 14;
    cpe_eleve[0].notes[1] = 16;

    printf("(%s %s), adresse: %s notes: %d %d\n", cpe_eleve[0].nom,
		    cpe_eleve[0].prenom,
		    cpe_eleve[0].adresse,
		    cpe_eleve[0].notes[0],
		    cpe_eleve[0].notes[1]);
    return (0);
}
