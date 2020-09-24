// L'utilisation de scanf

#include <stdio.h>

int main() {
  char message[10];
  printf("Votre message\n");
  scanf("%s", message);

  int i;
  printf("Votre numéro\n");
  scanf("%d", &i);

  float f;
  printf("Votre numéro (float)\n");
  scanf("%f", &f);

  printf("Message: %s, numéro: %d %f\n", message, i, f);
  return (0);
}
