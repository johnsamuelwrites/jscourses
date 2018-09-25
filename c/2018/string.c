#include <stdio.h>

int main() {

  char message1[8] = {'B', 'o', 'n', 'j', 'o', 'u', 'r'};
  char message2[9] = "le monde";
  char message3[4] = {"!!!"};
  char cours[] = {"Programmation en C"};

  printf("message: %s %s%s: %s\n", message1, message2, message3, cours);
  printf("sizeof(cours): %ld\n", sizeof(cours));
 
  int i =0;
  while(cours[i]!= '\0') {
    printf("%c", cours[i]);
    i++;
  }

  printf("\n");
   
  for(i=0; i<sizeof(cours)/sizeof (char); i++) {
    printf("%c", cours[i]);
  }
  printf("\n");

  return(0);
}
