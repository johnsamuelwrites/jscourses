// Comparaison entre sizeof, strlen et strnlen

#include <stdio.h>
#include <string.h>

int main() {
  char message1[100] = "Bonjour";
  char message2[20] = "le monde";

  printf("taille: Message 1: %ld\n", sizeof(message1));
  printf("taille: Message 2: %ld\n", sizeof(message2));

  printf("taille: Message 1: %ld\n", strlen(message1));
  printf("taille: Message 2: %ld\n", strnlen(message2, sizeof(message2)));
  return (0);
}
