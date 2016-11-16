CC=gcc
CFLAGS=-std=c99 -Wall -o
testfile=input
testmain=inputTest

all:
	$(CC) $(CFLAGS) $(testfile).o $(testmain).c ../../$(testfile).c

test:
	-./$(testfile).o -a 12 -b 5 -c 6
	-./$(testfile).o -a 12 -b 5 -c 6