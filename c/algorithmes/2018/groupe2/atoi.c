#include <stdio.h>
#include <stdlib.h>

int main() {
  char message[100];
  char heure[3] = "20";

  printf("La réunion est prévu à %dh\n", atoi(heure));
  printf("La réunion est prévu à %ldh\n", atol(heure));
  printf("La réunion est prévu à %lldh\n", atoll(heure));

  return(0);
}
