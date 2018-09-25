#include <stdio.h>
#include <limits.h>

int main() {
  char message1[10] = "bonjour";
  char message2[] = {"le monde"};

  printf("message: %s %s\n", message1, message2);
  printf("sizeof(message1): %ld\n", sizeof(message1));
  printf("sizeof(message2): %ld\n", sizeof(message2));

  return(0);
}
