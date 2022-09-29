/*
 * Accès aux valeurs transmises par l'interface de ligne de commande
 */

#include <stdio.h>

int main(int argc, char **argv) {
   printf("Compte: %d\n", argc);
 
   for (int compteur = 0; compteur < argc; compteur++) {
     printf("argv[%d] %s\n", compteur, argv[compteur]);
   }
   return 0;
}
