#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "../../quadhead.h"

int main(int argc, char *argv[])
{
	assert(argc >= 3);
	int numofroots = atoi(argv[1]);
	assert(numofroots >= 0);
	assert(numofroots < 3);
	double* roots;
	if (numofroots == 1)
	{
		roots = (double*) malloc(sizeof(double));
		roots[0] = atof(argv[2]);
	} else {
		roots = (double*) malloc(2*sizeof(double));
		roots[0] = atof(argv[2]);
		roots[1] = atof(argv[3]);
	}
	int valid = output(numofroots, roots);
	assert(valid == 0);
	return 0;
}