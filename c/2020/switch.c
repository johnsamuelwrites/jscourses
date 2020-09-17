// switch et l'utisation de break

#include <stdio.h>

int main() {
  int annee = 5;

  switch(annee) {
    case 3: printf("3eme année\n"); 
	    break;
    case 4: printf("4eme année\n"); 
	    break;
    case 5: printf("5eme année\n");  
	    break;
    default: printf("Error\n");
  }
  return (0);
}
