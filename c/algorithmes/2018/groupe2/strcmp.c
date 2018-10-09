#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char msg1[] = "bonjour";
  char msg2[] = "bonjour";
  
  if (msg1 == msg2) {
    printf("les mêmes phrases\n");
  }
  else {
    printf("non\n");
  }

  if (*msg1 == *msg2) {
    printf("les mêmes phrases\n");
  }
  else {
    printf("non\n");
  }

  char msg3[] = "bonjour le monde";
  if (*msg1 == *msg3) {
    printf("les mêmes phrases\n");
  }
  else {
    printf("non\n");
  }

  if (strcmp(msg1, msg3) == 0) {
    printf("les mêmes phrases\n");
  }
  else {
    printf("non\n");
  }


  if (strcmp(msg1, msg2) == 0) {
    printf("les mêmes phrases\n");
  }
  else {
    printf("non\n");
  }

  printf("strcmp(msg1, msg3): %d\n", strcmp(msg1, msg3));
  printf("strcmp(msg3, msg1): %d\n", strcmp(msg3, msg1));
  return(0);
}
