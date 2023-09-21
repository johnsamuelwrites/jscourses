#include <stdio.h>
#include <string.h>

/* Ce programme a pour objectif de démontrer l'utilisation des types définis par l'utilisateur à l'aide de l'instruction 'typedef' en langage C.
 * Il définit deux types personnalisés, 'caractère' (alias pour 'char') et 'entier' (alias pour 'short').
 * Ensuite, il utilise ces types pour déclarer une structure 'adresse' et une structure 'élève' avec des champs de ces types personnalisés.
 * Le code crée une instance de la structure 'élève' appelée 'dupont', initialise ses champs, et affiche des informations relatives à cette instance.
 */

typedef char caractère;
typedef short entier;

struct adresse {
   caractère rue[30];
   caractère ville[30];
} adresse;

typedef struct elève {
   caractère nom[30];
   caractère prenom[30];
   struct adresse adresse;
   entier notes_progc;
} elève;

int main() { 
   // Création d'une instance de la structure 'élève' appelée 'dupont'
   elève dupont;

   // Initialisation des champs de 'dupont'
   strcpy(dupont.nom, "Dupont");
   strcpy(dupont.adresse.ville, "Lyon");
   dupont.notes_progc = 19;

   // Affichage des informations de 'dupont'
   printf("Nom: %s\n", dupont.nom);
   printf("Ville: %s\n", dupont.adresse.ville);
   printf("Notes: %d\n", dupont.notes_progc);

   return 0;
}

