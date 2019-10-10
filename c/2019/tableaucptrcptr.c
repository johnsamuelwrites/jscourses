#include <stdio.h>

int main() {
  char message[3][30] = {
    "bonjour",
    "le monde",
    "Programmation en C"
   };

  char *cptrcptr[3];
  cptrcptr[0] = &message[0][0];
  cptrcptr[1] = &message[1][0];
  cptrcptr[2] = &message[2][0];

  printf("%s\n", message[0]);
  printf("%s\n", cptrcptr[0]);

  return(0);
}
