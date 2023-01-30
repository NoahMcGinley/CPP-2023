#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	/* Program 4-14
	accepts no arguments
	Determines letter grade based on score*/

	// Defines variables
	const int A_SCORE = 90,
		B_SCORE = 80,
		C_SCORE = 70,
		D_SCORE = 60,
		F_SCORE = 0;
	float score;

	// Input
	cout << "Enter in your score: ";
		cin >> score;

	// Determine letter grade
	if (score >= A_SCORE)
	{
		cout << "You receive an A";
	}
	else if (score >= B_SCORE)
	{
		cout << "You receive a B";
	}
	else if (score >= C_SCORE)
	{
		cout << "You receive a C";
	}
	else if (score >= D_SCORE)
	{
		cout << "You receive a D";
	}
	else if (score >= F_SCORE)
	{
		cout << "You receive an F";
	}
	else
	{
		cout << "Invalid score";
	}

	return 0;
}