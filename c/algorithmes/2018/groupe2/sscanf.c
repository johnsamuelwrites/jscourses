#include <stdio.h>
#include <stdlib.h>

int main() {
  char message[100];
  char heurestr[3] = "20";
  int heure;
  sscanf(heurestr, "%d", &heure);
  printf("L'heure: %d\n",heure);

  return(0);
}
