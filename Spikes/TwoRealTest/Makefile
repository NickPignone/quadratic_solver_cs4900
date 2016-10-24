CC=gcc
CFLAGS=-std=c99 -Wall -o
testfile=twoReal
testmain=twoRealTest

all:
	$(CC) $(CFLAGS) $(testfile).o $(testmain).c ../../$(testfile).c

test:
	-./$(testfile).o
	-./$(testfile).o -1 0 4
	-./$(testfile).o 1 0 4
	-./$(testfile).o 1 3 5