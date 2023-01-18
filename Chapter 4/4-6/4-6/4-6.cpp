#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{

	/*Program 4-6
	Accepts no arguments
	Prompts the user for three test scores to average
	if the average is higher than the high score constant
	of 95, display a congratulations message*/

	// Defines variables
	const int HIGH_SCORE = 95;
	int test1, test2, test3;
	float average;

	// Input
	cout << "Enter three test scores, space, and I will average them: ";
	cin >> test1 >> test2 >> test3;

	// Calculations
	average = (test1 + test2 + test3) / 3.0;
	cout << fixed << showpoint << setprecision(1);
	cout << "Your average is: " << average << endl;

	// Determines if the average has surpassed the high score
	if (average > HIGH_SCORE)
	{
		cout << "Congratulations! Thats a new high score!\n";
		cout << "Great Job!";
	}

	return 0;

}