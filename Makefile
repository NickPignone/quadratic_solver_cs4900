CC=gcc
CFLAGS=-std=c99 -Wall -o
mainfile=quadsolver
noreal=noReals
one=oneReal
two=twoReal
in=input
out=output
disc=discriminant

all:
	$(CC) $(CFLAGS) $(mainfile).o $(mainfile).c $(disc).c $(noreal).c $(one).c $(two).c $(in).c $(out).c
	cd Spikes/InputTest; make
	cd Spikes/AbsoluteError; make
	cd Spikes/RelativeError; make
	cd Spikes/DiscTest; make
	cd Spikes/NoRealsTest; make
	cd Spikes/OneRealTest; make
	cd Spikes/TwoRealTest; make
	cd Spikes/OutputTest; make
	cd Spikes/NaN_Infs; make
	cd Spikes/SquareRoot; make
	@echo "You can use make test to run automated tests or make run to run the main program"

run:
	./$(mainfile).o

test:
	cd Spikes/InputTest; make test
	cd Spikes/AbsoluteError; make test
	cd Spikes/RelativeError; make test
	cd Spikes/DiscTest; make test
	cd Spikes/NoRealsTest; make test
	cd Spikes/OneRealTest; make test
	cd Spikes/TwoRealTest; make test
	cd Spikes/OutputTest; make test
	cd Spikes/NaN_Infs; make test
	cd Spikes/SquareRoot; make test
	$(CC) $(CFLAGS) mock.o $(mainfile).c mock.c
	-./mock.o
	@echo "Output should be 'Single root is: -1.00'"
	./$(mainfile).o -a 1 -b 2 -c 1
	@echo "Output should be 'Roots are: -0.80+1.41i and -0.80-1.41i'"
	./$(mainfile).o -a 4.2 -b 6.7 -c 11
	@echo "Output should be 'Roots are: .99 and -3.79'"
	./$(mainfile).o -a 1.55 -b 4.345 -c -5.8