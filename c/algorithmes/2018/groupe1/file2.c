#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>


int main() {
  int fd;
  char c[20];
 
  fd = open("sprintf.c", O_RDONLY);
  int size = 0;
  while(1) {
    memset(c, 0, sizeof(c));
    size = read(fd, c, sizeof(c));
    if(size<=0) {
      break;
    }
    for(int i=0; i<size; i++) {
      printf("%c", c[i]);
    }
  }while(1);
  
  close(fd);
  return(0);
}
