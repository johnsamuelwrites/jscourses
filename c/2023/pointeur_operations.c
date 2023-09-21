#include <stdio.h>

/* Ce programme a pour objectif d'afficher le message "Bonjour le monde" en utilisant un tableau d'entiers 's' 
 * pour stocker les codes ASCII correspondants aux caractères du message.
 * Il démontre également l'utilisation des pointeurs pour accéder et manipuler les éléments du tableau.
 */

int main() {
   int s[4] = {1000011, 1000012};

   // Affichage des éléments du tableau 's' et de leurs indices
   for (int i = 0; i < 4; i++)  {
      printf("s[%d]: %d\n", i, s[i]); 
   }

   // Utilisation d'un pointeur 'iptr' pour accéder aux éléments du tableau 's'
   int *iptr = s;
   for (int i = 0; i < 4; i++)  {
      printf("*iptr %p: %d\n", iptr, *iptr); 
      iptr = iptr + 1;
   }

   // Utilisation d'un autre pointeur 'iptr2' pour accéder à certains éléments du tableau 's'
   int *iptr2 = &s[1];
   for (int i = 1; i < 4; i++)  {
      printf("*iptr2 %p: %d\n", iptr2, *iptr2); 
      iptr2 = iptr2 + 1;
   }

   // Calcul de la différence entre les deux pointeurs et affichage
   printf("difference: %ld\n", iptr2 - iptr);
   printf("*iptr2 %p: %d\n", iptr2 - 3 , *(iptr2 - 3)); 

   return 0;
}

