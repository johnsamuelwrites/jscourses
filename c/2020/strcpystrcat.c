// L'utilisation des foncitons strcpy,
// strncpy, strcat et strncat

#include <stdio.h>
#include <string.h>

int main() {
  char message1[100] = "Bonjour";
  char message2[20] = "le monde";

  strcat(message1, " ");
  printf("Message1: %s\n", message1);

  strcat(message1, message2);
  printf("Message1: %s\n", message1);

  strcpy(message1, "!!!!!");
  printf("Message1: %s\n", message1);

  strncpy(message1, "Hello!!", sizeof(message1));
  printf("Message1: %s\n", message1);
  return (0);
}
