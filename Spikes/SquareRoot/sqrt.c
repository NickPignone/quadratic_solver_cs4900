#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char* argv[])
{
	if(argc == 3)
	{
		double result = sqrt(atof(argv[1]));
		char* expected = argv[2];
		printf("Result: %lf\nExpected Result: %s\n", result, expected);
	}
	else
		printf("Enter a double value to find its square root and your expected outcome.\n");
	
	return 0;
}
