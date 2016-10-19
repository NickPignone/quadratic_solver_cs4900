#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "../../quadhead.h"

int main(int argc, char *argv[])
{
	assert(argc == 4);
	double* image = noReals(atof(argv[1]), atof(argv[2]), atof(argv[3]));
	assert(image != NULL);

	return 0;
}