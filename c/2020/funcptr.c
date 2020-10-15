/* 
 * les pointeurs de fonctions 
 */
#include <stdio.h>
int addition (int a, int b) {
  return a + b;
}

int multiplication (int a, int b) {
  return a * b;
}

int main() {
  int (* func)(int, int);
  char op = '*';
  int num1 = 20, num2 = 30;

  if (op == '*') {
    func = multiplication; 
  }
  else if (op == '+') {
    func = addition; 
  }

  int valeur = func(num1, num2);
  printf("valeur: %d\n", valeur);
  return (0);
}
