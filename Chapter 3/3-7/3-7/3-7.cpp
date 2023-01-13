
#include <iostream>
using namespace std;

int main()
{
	/*Program 3-7
	Demonstrates overfow and overflow of an integer*/

	// Initialize testVar with the max value for a short
	short testVar = 32767;

	cout << "Maxiumum short integer value: " << testVar << endl;

	// Add 1 to make it overflow
	testVar = testVar + 1;
	cout << "Add 1 to make testVar overflow: " << testVar << endl;

	// Subract 1 to make it underflow
	testVar = testVar - 1;
	cout << "Subtract 1 to make testVar underflow back to it's original value: "
		<< testVar << endl;

	return 0;
}
