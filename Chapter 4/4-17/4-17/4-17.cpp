#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	/*Program 4-17
	accepts no arguments
	prompts the user for loan requirements and
	determines eligibility
	uses not(!)*/

	// Defines variables
	const int MIN_INCOME = 35000, MIN_YEARS = 5;
	int income, years;

	// Input
	cout << "What is your income? ";
	cin >> income;
	cout << "How long have you been employed? ";
	cin >> years;

	// Determines eligibility
	if (!(income >= MIN_INCOME || years >= MIN_YEARS))
	{
		cout << "You do not qualify.\n";
	}
	else
	{
		cout << "You qualify!\n";
	}

	return 0;
}