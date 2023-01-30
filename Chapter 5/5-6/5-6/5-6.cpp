#include <iostream>
using namespace std;

int main()
{
	/* Program 5-6
	Accepts no arguments
	Uses a counted while loop to find and output the square of numbers
	1 through 10*/

	const int MAX_NUMBER = 10;
	int num = 1;
	int numSquared;

	cout << "Number\t\tNumber Squared\n";
	cout << "--------------------------------\n";

	while (num <= MAX_NUMBER)
	{
		numSquared = pow(num, 2);
		cout << num << "\t\t" << numSquared;
		cout << endl;
		num++;
	}
}
