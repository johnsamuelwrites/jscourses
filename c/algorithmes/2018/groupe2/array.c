#include <stdio.h>

int main() {
  char message[20] = "bonjour";
  printf("%s\n", message);

  int i = 0;
  for (i =0; i < 20; i++) {
    printf("%c", message[i]);
  }
  printf("\n");

  
  char deuxmessages[2][20] = { "bonjour", "le monde" };
  printf("%s %s\n", deuxmessages[0], deuxmessages[1]);

  char troismessages[][12] = { "bonjour", "le monde", "hello"};
  return(0);

}
