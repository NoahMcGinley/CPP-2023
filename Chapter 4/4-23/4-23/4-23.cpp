#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	/* Program 4-23
	Accepts no arguments
	Takes input from the user in the form of a char
	Uses switch to tell the user what he or she entered*/

	// Defines variables
	char choice;

	// Input
	cout << "Choose from the following: A, B, or C: ";
	cin >> choice;

	// Use the switch statement to report the selection
	switch (choice)
	{
	case 'A': cout << "You entered A.\n";
		break;
	case 'b': cout << "You entered B.\n";
		break;
	case 'C': cout << "You ented C.\n";
		break;
	default: cout << "You did not enter A, B, or C!";
	}

	return 0;
}

