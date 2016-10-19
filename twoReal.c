#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "quadhead.h"
#include <assert.h>

double* twoReal(double discriminant, double a, double b)
{
	assert(discriminant > 0);
	assert(a != 0);

	double* ret = malloc(2*sizeof(double));
	ret[0]= (-b+sqrt(discriminant))/(2*a);
  	ret[1]= (-b-sqrt(discriminant))/(2*a);
  	return ret;
}