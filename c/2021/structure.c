#include <stdio.h>

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

    struct eleve dupont = {
	    "Dupont",
	    "Pierre",
	    "Villeurbanne",
	    14,
	    16
    };

    printf("(%s %s), adresse: %s notes: %d %d\n", dupont.nom,
		    dupont.prenom,
		    dupont.adresse,
		    dupont.notes[0],
		    dupont.notes[1]);
    return (0);
}
