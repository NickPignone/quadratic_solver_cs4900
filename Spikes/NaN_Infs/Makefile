CC=gcc
CFLAGS=-std=c99 -Wall -o
file=nan_inf

all:
	$(CC) $(CFLAGS) $(file).o $(file).c -lm
	echo "You can use 'make test' to run automated tests"

test:
	./$(file).o 0.0 0.0 nan
	./$(file).o 1.0 0.0 inf
	./$(file).o 0.0 1.0 0.0
	./$(file).o nan nan nan
	./$(file).o inf inf nan
	./$(file).o inf nan nan
	./$(file).o nan inf nan
