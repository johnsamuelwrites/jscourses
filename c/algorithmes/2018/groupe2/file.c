#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
  int fd;
  char content;

  fd = open("file.c", O_RDONLY);
  while(1) {
    int size = read(fd, &content, sizeof(content));
    if(size < 1) {
      break;
    }
    printf("%c", content);
  }

  close(fd);
  return(0);
}
