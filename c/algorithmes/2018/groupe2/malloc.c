#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  char *content = malloc(100 * sizeof(char));
  strcpy(content, "Bonjour");
  printf("%s\n", content);

  return(0);
}
