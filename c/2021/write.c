#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>


/*
 * écriture dans un fichier
 */

int main() {
    int fd = open("bonjour.txt", O_CREAT|O_WRONLY|O_APPEND, S_IRUSR|S_IWUSR);

    char message[100] = "Programmation en C";
    int size = write(fd, message, strnlen(message, sizeof(message)));

    close(fd);
    return (0);
}
