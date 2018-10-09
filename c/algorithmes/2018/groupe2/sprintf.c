#include <stdio.h>

int main() {
  char message[100];
  int heure = 20;

  sprintf(message, "La réunion est prévu à %dh", heure);
  printf("Votre message: %s\n", message);

  return(0);
}
