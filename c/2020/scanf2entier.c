// L'utilisation de la fonction sscanf
// pour récupérer deux numéros d'une chaîne

#include <stdio.h>

int main() {
  int num1, num2;
  printf("deux numéros:\n");
  scanf("%d %d", &num1, &num2);

  printf("somme: (%d + %d) %d\n", num1, num2, (num1+num2));
  return (0);
}
