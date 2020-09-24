// Afficher les octets d'un nombre entier

#include <stdio.h>

int main() { 
  int i = 0xa47865ff;
  void *vptr = &i;

  printf("Bonjour %hhx\n", *((char *) vptr));
  printf("Bonjour %hhx\n", *((char *) (vptr + 1)));
  printf("Bonjour %hhx\n", *((char *) (vptr + 2)));
  printf("Bonjour %hhx\n", *((char *) (vptr + 3)));

  return (0);
}
