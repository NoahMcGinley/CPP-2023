#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	/*Program 4-8
	accepts non arguments
	prompts the user for an odd or even integer
	and outputs if it is odd or even*/

	// Takes input
	int input;
	cout << "Enter an integer and I will tell you if it is odd or even. ";
	cin >> input;

	// Determines if it is even or not
	if (input % 2 != 0)
		cout << input << " is an odd number.";
	else
		cout << input << " is an even number.";

	return 0;

}