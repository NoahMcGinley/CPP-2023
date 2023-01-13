#include <iostream>
using namespace std;

int main()
{
	/*Program 3-7
	Demonstrates overfow and overflow of an integer*/

	// Initialize testVar with the max value for a short
	float testVar;

	// Add 1 to make it overflow
	testVar = 2.0e38 * 1000;
	cout << "2.0e38 * 1000 results in the following overflow: " << testVar << endl;

	// Subract 1 to make it underflow
	testVar = 2.0e-38 / 2.0e38;
	cout << "2.0e-38 / 2.0e38 results in the following underflow: "
		<< testVar << endl;

	return 0;
}
