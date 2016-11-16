CC=gcc
CFLAGS=-std=c99 -Wall -o
testfile=output
testmain=outputTest

all:
	$(CC) $(CFLAGS) $(testfile).o $(testmain).c ../../$(testfile).c

test:
	-./$(testfile).o
	-./$(testfile).o -1 3 4
	-./$(testfile).o 0 1 2
	-./$(testfile).o 1 3
	-./$(testfile).o 2 1 2