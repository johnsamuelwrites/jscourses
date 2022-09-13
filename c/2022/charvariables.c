/*
 * Utiliser des variables
 */

#include <stdio.h> // header

int main() {
  char ch='a';
  printf("Bonjour le monde %c\n", ch);

  ch=65; // ASCII
  printf("Bonjour le monde %c\n", ch);

  ch='t'; // ASCII
  printf("Bonjour le monde %c %i\n", ch, ch);

  ch='é'; // Warning
  printf("Bonjour le monde %c %i\n", ch, ch);
  return 0;
}
