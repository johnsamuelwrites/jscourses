/*
 * passage par référence: chaîne de caractères
 */ 

#include <stdio.h>
void affichage3 (char *message) {
  printf("message: %s\n", message);
  message[4] = 'C';
}

void affichage2 (char message[]) {
  printf("message: %s\n", message);
  message[3] = 'B';
}

void affichage (char message[10]) {
  printf("message: %s\n", message);
  message[2] = 'A';
}

int main() {  
  char str[10] = "Bonjour";

  affichage(str);
  printf("Après affichage: %s\n", str);
  affichage2(str);
  printf("Après affichage2: %s\n", str);
  affichage3(str);
  printf("Après affichage3: %s\n", str);
  return (0);
}
