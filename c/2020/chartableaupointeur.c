/* travailler avec un caractère, une chaîne de
 * caractères et un pointeur de caractère
 */

#include <stdio.h>

void affichage1 (char ch[10]) {
  printf("%s\n", ch);
}

void affichage2 (char ch[]) {
  printf("%s\n", ch);
}

void affichage3 (char *ch) {
  printf("%s\n", ch);
}

int main() {
  char c = 'B';
  char chaine[10] = "Bonjour";
  char *cptr = "Le Monde!";

  return (0);
}
