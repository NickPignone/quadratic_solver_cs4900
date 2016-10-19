#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char* argv[])
{
	if(argc >= 4)
	{
		double inf = atof(argv[1]) / atof(argv[2]);
		char * expected = argv[3];
		printf("Result: %lf\nExpected: %s\n", inf, expected);
	}
	else
		printf("Please enter two double values and the expected result.");
	
	return 0;
}
