/*
 * utilisation de switich
 */
#include <stdio.h> //en-têtes

int main() {
  int a = 2;
  switch(a) {
    case 1: printf("Bonjour");
            break;
    case 2: printf("Hello");
    case 3: printf("le monde");
            break;
    default :printf("error");
  }
  return(0);
}
