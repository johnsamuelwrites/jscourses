// tableau à deux indices
// deux chaînes de caractères

#include <stdio.h>

int main() {
  char message[2][20] = {"Bonjour", "Le monde"};

  int compteur1;
  int compteur2;
  for (compteur1 = 0; compteur1  < 2; compteur1++) {
    for (compteur2 = 0; compteur2  < 20; compteur2++) {
      printf("%c", message[compteur1][compteur2]);
    }
    printf("\n");
  }

  return (0);
}
