/*
 * les différentes façons d'échanger
 * les valeurs des variables 
 */

#include <stdio.h>
void echange2 (int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void echange (int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {  
  int a = 10, b = 20;
  printf("Avant echange %d %d\n", a, b);
  echange(a,b);
  printf("Après echange %d %d\n", a, b);

  printf("Avant echange2 %d %d\n", a, b);
  echange2(&a, &b);
  printf("Après echange2 %d %d\n", a, b);
  return (0);
}
