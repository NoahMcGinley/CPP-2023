
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	/*
	Accepts no arguments
	Takes input for average rainfall and calculates
	the average*/

	// Defines variables
	string month1, month2, month3;
	float month1int, month2int, month3int;
	float average;

	// Input for all three months
	cout << "Enter a month to record rainfall for: ";
	cin >> month1;
	cout << "Enter the rainfall for " << month1 << ": ";
	cin >> month1int;

	cout << "Enter a month to record rainfall for: ";
	cin >> month2;
	cout << "Enter the rainfall for " << month2 << ": ";
	cin >> month2int;

	cout << "Enter a month to record rainfall for: ";
	cin >> month3;
	cout << "Enter the rainfall for " << month3 << ": ";
	cin >> month3int;

	// Calculates average
	average = (month1int + month2int + month3int) / 3;
	
	// Output
	cout << "The average rainfall for the months of " << month1
		<< ", " << month2 << ", and " << month3 << " is: " << average;

	return 0;

}

