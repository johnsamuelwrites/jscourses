#include <stdio.h>

struct etudiant {
  char nom[24];
  int note1;
  int note2;
};

union etudiantunion {
  char nom[24];
  int note1;
  int note2;
};

int main() {
  printf("sizeof(struct): %ld\n", sizeof(struct etudiant));
  printf("sizeof(union): %ld\n", sizeof(union etudiantunion));
  return(0);
}
