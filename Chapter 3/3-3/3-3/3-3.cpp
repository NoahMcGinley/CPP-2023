#include <iostream>
using namespace std;

int main()
{
	/*Program 3-2
	Accepts no arguments
	It takes input from the user for three values, first an integer,
	then a double, then a character.
	It outputs them in the order they are taken as input. */

	// Defines variables
	int intVar;
	double doubleVar;
	char charVar;

	// Takes input
	cout << "Enter an integer, a double, and a character separated by a space: ";
	cin >> intVar >> doubleVar >> charVar;

	// Output
	cout << "For the integer value you entered: " << intVar << endl
		<< "For the double value you entered: " << doubleVar << endl
		<< "For the character you entered: " << charVar;

	return 0;
}
