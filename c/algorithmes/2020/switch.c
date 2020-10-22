/*
 * des variables
 */

#include <stdio.h>

int main() {
  int a = 11;

  switch(a) {
    case 10: printf("dix\n"); break;
    case 11: printf("onze\n");
    case 12: printf("douze\n");break;
    default : printf("erreur");
  } 

  return (0);
}
