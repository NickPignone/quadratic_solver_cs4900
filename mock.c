#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include "quadhead.h"
#include <assert.h>

double mocka, mockb, mockc, mockdisc;

struct Input getInput(int argc, char* argv[])
{
	struct Input *in = malloc(sizeof(struct Input));
	mocka = 1;
	mockb = 2;
	mockc = 3;
	mockdisc = 4;
	in->a = mocka;
	in->b = mockb;
	in->c = mockc;
	return *in;
}

double getDisc(double a, double b, double c)
{
	assert(a == mocka);
	assert(b == mockb);
	assert(c == mockc);
	return mockdisc;
}

double* twoReal(double discriminant, double a, double b)
{
	assert(a == mocka);
	assert(b == mockb);
	assert(discriminant == mockdisc);

	double *mockreal = malloc(2*sizeof(double));
	mockreal[0] = 0;
	mockreal[1] = 1;
	return mockreal;
}

double oneReal(double discriminant, double a, double b)
{
	assert(a == mocka);
	assert(b == mockb);
	assert(discriminant == mockdisc);
	return 1;
}

double* noReals(double discriminant, double a, double b)
{
	assert(a == mocka);
	assert(b == mockb);
	assert(discriminant == mockdisc);
	double *mockreal = malloc(2*sizeof(double));
	mockreal[0] = 0;
	mockreal[1] = 1;
	return mockreal;
}

int output(int numofroots, double* roots)
{
	assert(numofroots == 2);
	assert(roots != NULL);
	assert(roots[0] == 0);
	assert(roots[1] == 1);
	return(0);
}