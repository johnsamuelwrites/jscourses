#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  char *content = calloc(1000000000000000, sizeof(char));
  if (content == NULL) {
    perror("Memoirs insuffisante\n");
    exit(1);
  }
  strcpy(content, "Bonjour");
  printf("%s\n", content);
  
  free(content);

  return(0);
}
