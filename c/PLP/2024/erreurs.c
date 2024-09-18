#include <stdio.h>

int main() {

   int tableau[100];

   for (int compteur = 0; compteur < sizeof(tableau); compteur++) { //Erreur (à identifier : gdb)
       tableau[compteur] = tableau[compteur] * 2;
   }
   
   return (0);

}
