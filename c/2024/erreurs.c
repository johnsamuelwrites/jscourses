/*
 * Exemple d'un code C qui contient une erreur de programmation, 
 * avec une boucle for qui essaie de parcourir un tableau 
 * avec le membre `sizeof` (ce qui est incorrect)
*/

#include <stdio.h>

int main() {

   int tableau[100];

   for (int compteur = 0; compteur < sizeof(tableau); compteur++) { //Erreur
       tableau[compteur] = tableau[compteur] * 2;
   }
   
   return (0);

}
