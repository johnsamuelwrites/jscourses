/*
 * Utilisation de fonctions
 */

#include <stdio.h>

void print_message_ptr(char *message[], int size) {
  int i;
  for (i= 0; i< size; i++) {
    printf("%s\n", message[i]);
  }
}


void print_message(char message[][20], int size) {
  int i;
  for (i= 0; i< size; i++) {
    printf("%s\n", message[i]);
  }
}

int main() {
  char *message[20] = {
     "Pierre",
     "Dupont",
     "Lyon"
  };
  print_message_ptr(message, 3);


  return(0);
}
