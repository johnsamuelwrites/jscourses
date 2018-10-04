#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>


int main() {
  int fd;
  char c[100];
  fd = open("message.txt", O_CREAT|O_WRONLY);
  while(1) {
    printf("Tapez votre message (FIN pour finir)");
    scanf("%s", c);
    if(strcmp(c, "FIN") == 0) {
      break;
    }
    write(fd, &c, strlen(c));
  }
  close(fd);
  
  return(0);
}
