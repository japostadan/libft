CC=gcc
CFLAGS=-Wall -Wextra -Werror

all: testfile

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

reverse.o: reverse.c libft.h
	$(CC) $(CFLAGS) -c reverse.c

libft.a:reverse.o
	ar rcs reverse.o

testfile: testfile.c reverse.o
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f *.o *.swp  testfile
