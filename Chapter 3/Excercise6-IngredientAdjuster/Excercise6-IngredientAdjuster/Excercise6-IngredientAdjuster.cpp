
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
	Asks the user how many cookies they want to make,
	and calculates the neccessary ingredients*/

	// Defines Variables
	float numCookies;
	float cupsSugar, cupsButter, cupsFlour;
	const float sugar = 1.5;
	const float butter = 1;
	const float flour = 2.75;

	// Input
	cout << "Enter the number of cookies: ";
	cin >> numCookies;
	
	// Calculates ingredients
	cupsSugar = sugar / 48 * numCookies;
	cupsButter = butter / 48 * numCookies;
	cupsFlour = flour / 48 * numCookies;

	// Output
	cout << "\nTo make " << numCookies << " cookies, you will need:" << endl;
	cout << setprecision(3) << cupsSugar << " cups of sugar\n" << cupsButter << " cups of butter\n" << cupsFlour << " cups of flour";

	return 0;

}