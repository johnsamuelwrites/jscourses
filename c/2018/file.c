#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


int main() {
  int fd;
  char c;
  fd = open("file.c", O_RDONLY);
  while (read(fd, &c, 1) > 0) {
    printf("%c", c);
  }
  close(fd);
  
  return(0);
}
