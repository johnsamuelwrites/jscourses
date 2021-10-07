#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


/*
 * lecture d'un fichier
 */

int main() {
    int fd = open("read.c", O_RDONLY);

    char c;
    while (1) {
	    int size = read(fd, &c, sizeof(c));
	    if (size < 1) {
		break;
	    }
	    printf("%c", c);
    }

    close(fd);
    return (0);
}
