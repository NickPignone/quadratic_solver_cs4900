struct Input {
	double a;
	double b;
	double c;
};

struct Input getInput(int, char*[]);
double getDisc(double, double, double);
double* twoReal(double, double, double);
double oneReal(double, double, double);
double* noReals(double, double, double);
int output(int, double*);