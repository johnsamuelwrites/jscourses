#include <stdio.h>

/*
 * utilisation de 'switch' et 'break' 
 */

int main() {
    int a = 20;
    switch (a)   {
	    case 10: printf("10\n");
		     break;
	    case 20: printf("20\n");
		     break;
	    case 30: printf("30\n");
		     break;
	    default: printf(">30\n");
		     break;
    }
    return (0);
}
