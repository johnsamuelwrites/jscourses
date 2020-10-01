// L'utilisation des fonctions malloc et free
// pour l'allocation dynamique de mémoire
// afin de créer un tableau de char (caractères)

#include <stdio.h>
#include <stdlib.h>

int main() { 
  int taille;
  char *message;

  char taillestr[10];
  printf("La taille maximum de votre message: ");
  fgets(taillestr, 10, stdin);
  sscanf(taillestr, "%d", &taille);

  message = malloc(taille);
  if (message == NULL) {
    printf("Erreur: allocation de mémoire\n");
    return(1);
  }

  printf("Votre message: \n");
  fgets(message, taille, stdin);
  printf("%s", message);
  return (0);
}
