CC=gcc
CFLAGS=-std=c99 -Wall -o
file=relativeError

all:
	$(CC) $(CFLAGS) $(file).o $(file).c -lm
	echo "You can use 'make test' to run automated tests"

test:
	./$(file).o 4.0 4.0
	./$(file).o 16.0 16.2
	./$(file).o 22 23.2
