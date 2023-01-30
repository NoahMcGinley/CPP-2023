#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	/* Accepts no arguments
	asks user for two numbers in which to divide
	and outputs an error in the denominator is 0*/

	// Defines variables
	float int1, int2;

	// Input
	cout << "Enter two integers to divide: ";
	cin >> int1 >> int2;

	// Checks to see if it is equal to 0
	if (int2 == 0)
		cout << "You cant divide by 0!";
	else
		cout << (int1 / int2);
		
}