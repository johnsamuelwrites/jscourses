/*
 * affichage d'un message et la modification
 */

#include <stdio.h>

int main() {
  char message[20] = "le monde";
  printf("%s\n", message);

  message[0] = 'B';
  message[1] = 'o';
  message[2] = 'n';
  message[3] = '\0';

  printf("%s\n", message);
  return (0);
}
