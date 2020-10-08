/*
 * variables globales et locales
 */ 

#include <stdio.h>
int annee = 2020;

int main() {  
  int annee = 2021;
  {
    int annee = 2022;
    {
      printf("Bonjour %d\n", annee);
    }
  }
  {
    int annee = 2023;
    printf("Bonjour %d\n", annee);
  }
  return (0);
}
