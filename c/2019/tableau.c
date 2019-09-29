/*
 * tableau de nombres entiers et en virgule flottante 
 */
#include <stdio.h>

int main() {
  int i;
  int tableauint[5] = {11, 12, 13, 14};
  float tableaufloat[] = {11.1, 12.3, 13.4, 14.5, 15.4};
  char message[] = "mots";

  for (i= 0; i < 5; i++) {
    printf("%i ", tableauint[i]);
    printf("%f ", tableaufloat[i]);
    printf("%c\n", message[i]);
  }

  printf("%s\n", message);  

  return(0);
}
