/* 
 * L'utilisation des fonctions malloc et free
 * pour l'allocation dynamique de mémoire
 * afin de créer un tableau de char (caractères)
 * et l'utilisation de la fonction perror
 */

#include <stdio.h>
#include <stdlib.h>

int main() { 
  int taille = 1000000000;
  char *message;

  message = malloc(taille);
  if (message == NULL) {
    perror("Erreur: allocation de mémoire\n");
    return(1);
  }

  printf("Votre message: \n");
  fgets(message, taille, stdin);
  printf("%s", message);
  return (0);
}
