#include <stdio.h>
#include <string.h>

/* Ce programme a pour objectif de démontrer l'utilisation des structures en C pour représenter des données complexes.
 * Il définit deux structures, 'adresse' et 'élève', où 'élève' contient un champ 'adresse'.
 * Ensuite, il crée une instance de la structure 'élève' appelée 'dupont', initialise ses champs, 
 * et affiche certaines informations relatives à cette instance.
 */

struct adresse {
   char rue[30];
   char ville[30];
} adresse;

struct elève {
   char nom[30];
   char prenom[30];
   struct adresse adresse;
   short notes_progc;
} elève;

int main() { 
   // Création d'une instance de la structure 'élève' appelée 'dupont'
   struct elève dupont;

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

