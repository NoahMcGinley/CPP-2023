
#include <iostream>
using namespace std;

void first();
void second();

/*###########################################
# main accepts no arguments
# it calls functions first and second
# with the function main being at an earlier
# line than the function first and second themselves
#############################################*/
int main()
{
	// Display a message and cal each function
	cout << "Now calling function first...\n";
	first();
	cout << "Now calling function second...\n";
	second();
	cout << "Success";

	return 0;
}

/*#################################################
# first accepts no arguments
# it outputs a simple message
###################################################*/
void first()
{
	cout << "Hello from first\n";
}

/*#################################################
# second accepts no arguments
# it outputs a simple message
###################################################*/
void second()
{
	cout << "Hello from second\n";
}