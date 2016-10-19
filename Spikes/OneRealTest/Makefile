CC=gcc
CFLAGS=-std=c99 -Wall -o
testfile=oneRealTest

all:
	$(CC) $(CFLAGS) $(testfile).o $(testmain).c ../../$(testfile).c
	echo "You can use 'make test' to run automated tests"

test:
	-./$(testfile).o
	-./$(testfile).o -1 0 4
	-./$(testfile).o 0 0 4
	-./$(testfile).o 0 3 5