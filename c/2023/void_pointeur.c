#include <stdio.h>

/* Ce programme a pour objectif de démontrer comment accéder aux octets individuels d'une 
 * variable de type 'long int' et d'une variable de type 'float' en utilisant 
 * des pointeurs 'void' suivis de pointeurs de type 'char'.
 * Il affiche les octets sous forme hexadécimale pour chaque variable.
 */

int main() {
   // Déclaration et initialisation d'une variable de type 'long int'
   long int li = 0xa465;
   void *vptr = &li;
   char *cptr = (char *)vptr;

   printf("Long int\n");
   // Affichage des octets de 'li' sous forme hexadécimale
   for (int i = 0; i < sizeof(long int); i++) {
      printf("%d: %hhx\n", i, *(cptr + i));
   }

   // Déclaration et initialisation d'une variable de type 'float'
   printf("\nFloat\n");
   float f = 2;
   vptr = &f;
   cptr = (char *)vptr;

   // Affichage des octets de 'f' sous forme hexadécimale
   for (int i = 0; i < sizeof(f); i++) {
      printf("%d: %hhx\n", i, *(cptr + i));
   }

   // Réinitialisation de la variable 'f' et affichage de ses octets
   printf("\nFloat\n");
   f = 1;
   vptr = &f;
   cptr = (char *)vptr;

   // Affichage des octets de 'f' après réinitialisation
   for (int i = 0; i < sizeof(f); i++) {
      printf("%d: %hhx\n", i, *(cptr + i));
   }

   return 0;
}

