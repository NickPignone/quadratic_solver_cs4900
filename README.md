# quadratic_solver_cs4900
Quadratic Solver Programming Assignment in C
Use the Makefile in this directory to test the entire application.
You can do so by:
	- Run make
	- Run make test

input.c:
	This takes in user input. Users can use the flags a, b, c, x, and y when calling the executable. a, b, and c are the variables and x and y are the expected values.  

determinant.c:
	This part takes in a, b, and c, from input and returns the determinant of the function

noReals.c:
	This function is called when there isn't a real answer, which happens when the determinant is less than 0;

oneReal.c:
	This function is called when there is only one real answer, which happens when the determinant is 0;

twoReal.c:
	This function is called when there are two real answers, which happens when the determinant is greater than 0;

mock.c:
	Is a mock object class used for testing all the above methods.

quadhead.h:
	This is a header file that includes all prototypes and global structs.

Authors for this project:
	Nick Pignone
	Skylar Freeman
	Brandon Kelly