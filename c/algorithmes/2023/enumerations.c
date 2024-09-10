#include <stdio.h>

int main() {
   enum boolean {FAUX, VRAI};
   enum boolean s = FAUX;
   printf("Bonjour Le Monde, c'est l'annéé 2022. C'est %u\n", s);
   return (0);
}
