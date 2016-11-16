#include <stdio.h>
#include <getopt.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "../../quadhead.h"

int main(int argc, char *argv[])
{
	assert(argc == 4);
	double det = getDisc(atof(argv[1]), atof(argv[2]), atof(argv[3]));
	//will break if NaN
	assert(det == det);
	
	return 0;
}