#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


int main() {
  int fd;
  char c;
 
  fd = open("sprintf.c", O_RDONLY);
  int size = 0;
  do {
    size = read(fd, &c, 1);
    printf("%c", c);
  }while(size >0);
  
  close(fd);
  return(0);
}
