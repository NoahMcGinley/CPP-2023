
#include <iostream>
using namespace std;

int main()
{
	/* Program 3-10
	Accepts no arguments
	Takes input from the user in the form of an integer
	uses Type Casting to convert the integer to a char data type
	and outputs the result*/

	// Defines variables
	int intVar;
	char charVar;

	// Takes input
	cout << "Enter an integer value to see the char conversion: ";
	cin >> intVar;

	// Converts to character
	charVar = static_cast<char>(intVar);

	// Outputs
	cout << "The integer " << intVar << " converted to a char is: " << charVar << endl;

	return 0;
}
