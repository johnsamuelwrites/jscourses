#include <stdio.h>
#include <limits.h>

int main() {
  char message[][10]  = {"bonjour",
           {"le monde"}};

  printf("message:");
  for(int i=0; i < sizeof(message)/sizeof(char[10]);i++) {
     printf("%s ", message[i]);
  }
  printf("\n");

  return(0);
}
