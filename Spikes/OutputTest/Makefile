CC=gcc
CFLAGS=-std=c99 -Wall -o
testfile=output
testmain=outputTest

all:
	$(CC) $(CFLAGS) $(testfile).o $(testmain).c ../../$(testfile).c

test:
	-./$(testfile).o 1 3