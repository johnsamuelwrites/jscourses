#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main() {
  int fd;
  char c[10];
  fd = open("file.c", O_RDONLY);
  while (read(fd, c, 9) > 0) {
    printf("%s", c);
    memset(c, 0, sizeof(c));
  }
  close(fd);
  
  return(0);
}
