#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{


	/*Program 4-1
	Accepts no arguments
	uses relational operators to demonstrate
	true or false*/

	// Initialize variables
	bool trueValue, falseValue;
	int x = 5, y = 10;

	// Assign true/false values
	trueValue = x < y;
	falseValue = y == x;

	cout << "True is: " << trueValue << endl;
	cout << "False is: " << falseValue << endl;




	/*Program 4-2
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

	if (average > HIGH_SCORE)
		cout << "Congratulations! Thats a new high score!\n";



	
	/*Program 4-4
	Demonstrates how float rounding can
	cause equality errors*/

	// Defines variables
	double a = 1.5, b = 1.5;

	a += 0.00000000000000000001;
	if (a == b)
		cout << "Both a and b are the same!\n";
	else
		cout << "a and b are not the same!\n";



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

	if (average > HIGH_SCORE)
	{
		cout << "Congratulations! Thats a new high score!\n";
		cout << "Great Job!";
	}


	return 0;


}