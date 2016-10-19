/*
  Authors: Nick Pignone, Skylar Freeman, and Brandon Kelly
  Date: 10/17/2016
  Class: CS 4900 
  Instructor: Dr. Kapenga
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include "quadhead.h"

int main(int argc, char *argv[])
{
	double discrim;

	struct Input userInput = getInput(argc, argv);
	discrim=getDisc(userInput.a, userInput.b, userInput.c);

	if (discrim > 0)
	{
		double* realNums = (double*) malloc(2 * sizeof(double));
		realNums = twoReal(discrim, userInput.a, userInput.b);
		output(2, realNums);
	}
	else if (discrim == 0)
	{
		double* realNum = (double*) malloc(2 * sizeof(double));
		double realRoot = oneReal(discrim, userInput.a, userInput.b);
		realNum = &realRoot;
		output(1, realNum);
	}
	else
	{
		double* image = (double*) malloc (sizeof(double));
		image = noReals(discrim, userInput.a, userInput.b);
		output(0, image);
	}

	return 0;
}