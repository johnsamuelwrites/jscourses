#include <stdio.h>
#include <limits.h>

int main() {
  char message[2][10]  = {"bonjour",
           {"le monde"}};

  printf("message: %s %s\n", message[0], message[1]);

  return(0);
}
