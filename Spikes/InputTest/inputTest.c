#include <stdio.h>
#include <getopt.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include "../../quadhead.h"

int main(int argc, char *argv[])
{
	struct Input input;
	input = getInput(argc, argv);
	assert(&input != NULL);
	return 0;
}