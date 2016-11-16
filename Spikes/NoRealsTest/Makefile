CC=gcc
CFLAGS=-std=c99 -Wall -o
testfile=noReals
testmain=noRealsTest

all:
	$(CC) $(CFLAGS) $(testfile).o $(testmain).c ../../$(testfile).c

test:
	-./$(testfile).o -1 3 5