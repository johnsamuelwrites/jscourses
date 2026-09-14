all: addition

addition: main.o addition.o
	gcc -Wall -Wextra -Werror -o addition main.o addition.o

main.o: main.c addition.h
	gcc -c -Wall -Wextra -Werror main.c

addition.o: addition.c addition.h
	gcc -c -Wall -Wextra -Werror addition.c

clean:
	rm -f main.o addition.o addition