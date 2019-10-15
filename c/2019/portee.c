/* 
 * La portée des variables
 */

#include <stdio.h>

int annee = 2017;

int main() {
  int annee = 2018;
  {
    int annee = 2019;
    {
      int annee = 2017;
      printf("Bonjour %d\n", annee);
    }
  }
  return(0);
}
