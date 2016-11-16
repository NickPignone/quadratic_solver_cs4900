#include <stdio.h>
#include <getopt.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "quadhead.h"
#include <assert.h>

struct Input getInput(int argc, char *argv[]){
	struct Input *input = malloc(sizeof(struct Input));

	bool boolA = false, boolB = false, boolC = false;
	char ch;

	while ((ch = getopt(argc, argv, "a:b:c:x:y:")) != -1)
	{
		switch (ch) {
			case 'a':
				boolA = true;
				input->a = atof(optarg);
				break;
			case 'b':
				boolB = true;
				input->b = atof(optarg);
				break;
			case 'c':
				boolC = true;
				input->c = atof(optarg);
				break;
			case '?':
				break;
		}
	}

	if (!boolA)
	{
		printf("Please enter a value for a\n");
		scanf("%lf", &input->a);
	}

	if (!boolB)
	{
		printf("Please enter a value for b\n");
		scanf("%lf", &input->b);
	}

	if (!boolC)
	{
		printf("Please enter a value for c\n");
		scanf("%lf", &input->a);
	}


	return *input;
}