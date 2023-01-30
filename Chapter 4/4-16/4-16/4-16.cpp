#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	/*Program 4-16
	accepts no arguments
	prompts the user for loan requirements and
	determines eligibility*/

	// Defines variables
	const int MIN_INCOME = 35000, MIN_YEARS = 5;
	int income, years;

	// Input
	cout << "What is your income? ";
	cin >> income;
	cout << "How long have you been employed? ";
	cin >> years;

	// Determines eligibility
	if (income >= MIN_INCOME || years >= MIN_YEARS)
	{
		cout << "You qualify!\n";
	}
	else
	{
		cout << "You do not qualify!\n";
	}

	return 0;
}