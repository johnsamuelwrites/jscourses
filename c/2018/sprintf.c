#include <stdio.h> //header

int main() {
  int num = 234;
  float pi = 3.14;
  char inumstr[30];
  char fnumstr[30];
  sprintf(inumstr, "%d", num);
  sprintf(fnumstr, "%0.2f", pi);
  
  printf("%s %s\n", inumstr, fnumstr);
  return(0);
}
