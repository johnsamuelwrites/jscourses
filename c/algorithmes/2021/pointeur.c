// affiche "bonjour"
//
#include <stdio.h>

/* fonction main
 */
int main() {
        char c = 'a';
        char *adr_c = &c;
        printf("c = %c\n", c);
        printf("adresse(c) = %p\n", adr_c);	
        printf("c = %c\n", c);	
        printf("valeur à l'adresse(c) = %c\n", *adr_c);	

	*adr_c = 'b';
        printf("adresse(c) = %p\n", adr_c);	
        printf("c = %c\n", c);	
        printf("valeur à l'adresse(c) = %c\n", *adr_c);	
	return (0);
}
