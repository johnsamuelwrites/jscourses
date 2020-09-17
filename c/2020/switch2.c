// switch 

#include <stdio.h>

int main() {
  int annee = 3;

  switch(annee) {
    case 3: 
    case 4: 
    case 5: printf("Elève de CPE Lyon\n");  
	    break;
    default: printf("Error\n");
  }
  return (0);
}
