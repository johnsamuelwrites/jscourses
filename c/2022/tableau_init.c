/*
 * Les tableaux
 */

#include <stdio.h>

int main()
{

   int compteur = 0;

   int tableau[5] = {1, 2, 3, 4, 5};

   float tableaur[] = {3.14, 45.56};

   char message[] = "Bonjour";

   printf("sizeof(tableau): %lu\n", sizeof(tableau));
   printf("sizeof(tableaur): %lu\n", sizeof(tableaur));
   printf("sizeof(message): %lu\n", sizeof(message));

   for (int compteur = 0; compteur < sizeof(tableau) / sizeof(int); compteur++)
   {
      printf("%d ", tableau[compteur]);
   }
   printf("\n");

   for (int compteur = 0; compteur < sizeof(tableaur) / sizeof(float); compteur++)
   {
      printf("%f ", tableaur[compteur]);
   }
   printf("\n");

   for (int compteur = 0; compteur < sizeof(message) / sizeof(char); compteur++)
   {

      printf("%c", message[compteur]);
   }
   printf("\n");

   printf("message: %s\n", message);

   return 0;
}
