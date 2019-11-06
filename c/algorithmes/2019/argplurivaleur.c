#include <stdio.h>

int main(int argc, char **argv) {
  int i;
  printf("%s\n", argv[0]);
  if (argc <2) {
    printf("usage: ./a.out nom1 nom2 ...");
    return(1);
  }
  for (i=1; i<argc; i++) { 
    printf("Bonjour %s\n", argv[i]);
  }
  return(0);
}
