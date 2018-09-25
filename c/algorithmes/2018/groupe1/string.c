#include <stdio.h>
#include <limits.h>

int main() {
  char message1[10] = "bonjour";
  char message2[20] = {"le monde"};

  printf("message: %s %s\n", message1, message2);

  return(0);
}
