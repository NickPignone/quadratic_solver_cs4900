#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include "quadhead.h"

int output(int numofroots, double* roots)
{
	assert(numofroots >= 0);
	assert(numofroots < 3);
	assert(roots != NULL);
	if (numofroots == 1)
	{
		printf("Single Root is: %.2lf\n", roots[0]);
	}
	else if (numofroots == 2)
	{
		printf("Roots are: %.2lf and %.2lf\n",roots[0] , roots[1]);
	}
	else 
	{
		printf("Roots are: %.2lf+%.2lfi and %.2lf-%.2lfi\n", roots[0], roots[1], roots[0], roots[1]);
	}
	return(0);
}