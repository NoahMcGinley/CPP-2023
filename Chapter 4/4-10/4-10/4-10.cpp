#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	/* Program 4-10
	accepts no arguments
	prompts the user for loan requirements, uses
	nested if statements to determeine if they qualify*/

	// Defines variables
	char employed, recentGrad;

	// Input
	cout << "Answer the following questions with either\n"
		<< "Y for yes or N for no";
	cout << "\nAre you currently employed?\n> ";
	cin >> employed;
	cout << "Have you graduated from college in the past two years?\n> ";
	cin >> recentGrad;

	// Uses nested if statements to determine eligibility
	if (employed == 'Y')
	{
		if (recentGrad == 'Y')
		{
			cout << "You qualify!";
		}
		else
		{
			cout << "You do not qualify.\n";
			cout << "You must have had graduated within the last two years.\n";
		}
	}
	else
	{
		cout << "You do not qualify.\n";
		cout << "Yuu must be employed.\n";
	}


	return 0;
}