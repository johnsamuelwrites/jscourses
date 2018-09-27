#include <stdio.h>
#include "print.h"

int main() {
  char message[] = "Bonjour";
  print(message, sizeof(message));
  print2("Bonjour le Monde!!!");
  return(0);
} 
