CC=gcc
CFLAGS=-std=c99 -Wall -o
file=absoluteError

all:
	$(CC) $(CFLAGS) $(file).o $(file).c -lm

test:
	./$(file).o 4.0 4.0
	./$(file).o 16.0 16.2
	./$(file).o 22 23.2
