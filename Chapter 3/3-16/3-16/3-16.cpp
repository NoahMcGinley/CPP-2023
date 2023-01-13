#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	/* Program 3-16
	Accepts no arguments
	Prompts the user for sales for days 1, 2, and 3
	and outputs the values with a total of all sales for
	the three days*/

	// Initializes variables
	float day1, day2, day3;

	// Takes input
	cout << "Please enter the sales for day 1: ";
	cin >> day1;
	cout << "Please enter the sales for day 2: ";
	cin >> day2;
	cout << "Please enter the sales for day 3: ";
	cin >> day3;

	// Output
	cout << "\nSales Amounts" "\n\n";
	cout << "-------------------" << endl;
	cout << setprecision(2) << fixed;
	cout << "Day 1:" << setw(8) << "$" << day1 << endl;
	cout << "Day 2:" << setw(8) << "$" << day2 << endl;
	cout << "Day 3:" << setw(8) <<  "$" << day3 << endl;

	return 0;

}

