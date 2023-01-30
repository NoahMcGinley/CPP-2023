#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	/* Program 4-22
	Accepts no arguments
	Prompts the user for hours and charges
	Calculates and outputs result*/

	// Defines variables
	const double PAY_RATE = 50.00;
	const int MIN_HOURS = 5;
	double hours, charges;

	// Take input from the user for number of hours
	cout << "How many hours were worked?\n";
	cin >> hours;

	// Calculate the total charges, increasing hours worked
	// to a minimum of 5
	hours = hours < MIN_HOURS ? MIN_HOURS : hours;
	charges = hours * PAY_RATE;

	// Output
	cout << fixed << showpoint << setprecision(2)
		<< "The charges are $" << charges << endl;

		return 0;
}


