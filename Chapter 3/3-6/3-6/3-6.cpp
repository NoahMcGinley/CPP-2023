#include <iostream>
using namespace std;

int main()
{
	/*Program 3-4
	Accepts no arguments
	kes input for three tests scores
	and calculates averages*/

	// Defines variable and takes input
	int test1, test2, test3, average;

	cout << "Input the score for test #1: ";
	cin >> test1;
	cout << "Input the score for test #2: ";
	cin >> test2;
	cout << "Input the score for test #3: ";
	cin >> test3;

	// Performs calculation
	average = (test1 + test2 + test3) / 3;

	// Output
	cout << "The average of the three test scores " << test1 << ", " << test2 << ", and " << test3 <<
		" is " << average;

	return 0;

}