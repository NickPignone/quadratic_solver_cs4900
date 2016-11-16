#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char* argv[])
{
	if(argc == 3)
	{
		char *expectedStr = argv[2];
		char *resultStr = argv[1];
		double expected = atof(expectedStr);
		double result = atof(resultStr);
		double final = fabs((result-expected)/expected);
		printf("Relative Error: %lf\nExpected Result: %lf\n", final, expected);
	}
	else
		printf("Enter a double value to find its absolute error and your expected outcome.\n");
	
	return 0;
}