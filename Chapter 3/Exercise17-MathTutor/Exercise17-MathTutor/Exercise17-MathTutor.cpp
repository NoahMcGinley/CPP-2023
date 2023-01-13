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
	Generates two random numbers and shows sum*/

	// Defines variables
	int num1, num2, answer;
	unsigned seed = time(0);
	char ch;

	// Generates numbers
	srand(seed);
	num1 = rand() % 1000;
	num2 = rand() % 1000;

	// Calculates answer
	answer = num1 + num2;

	// Output question
	cout << "   " << num1 << endl << " + " << num2 << "\n --------\n";
	cout << "Press Enter to see the answer...";
	cin.get(ch);

	// Outputs answer
	cout << "\n\n   " << num1 << endl << " + " << num2 << "\n --------\n   " << answer;

	return 0;

}