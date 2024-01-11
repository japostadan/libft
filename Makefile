CC=gcc
CFLAGS=-Wall -Wextra -Werror

all: testfile

ft_isalpha.o: ft_isalpha.c libft.h
	$(CC) $(CFLAGS) -c ft_isalpha.c

ft_idigit.o: ft_isdigit.c libft.h
	$(CC) $(CFLAGS) -c ft_isdigit.c

reverse.o: reverse.c libft.h
	$(CC) $(CFLAGS) -c reverse.c

libft.a:reverse.o ft_isalpha.o ft_isdigit.o
	ar rcs reverse.o ft_isalpha.o ft_isdigit.o

testfile: testfile.c reverse.o ft_isalpha.c ft_isdigit.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	@rm -rf *.o *.swp  testfile
