/*
 affiche 'bonjour'
 */ 


#include <stdio.h> //header
#include <stdlib.h> //exit()

int main(int argc, char ** argv) {
  if (argc != 2) {
    printf("Usage: commandline nom\n");
    exit(1);
  }
  printf("Bonjour! %s\n", argv[1]);
  return(0);
}
