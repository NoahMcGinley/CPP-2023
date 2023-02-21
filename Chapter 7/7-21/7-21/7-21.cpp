
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Initalize constants and variables
	const int NUM_DIVS = 3;
	const int NUM_QTRS = 4;

	double sales[NUM_DIVS][NUM_QTRS];
	double totalSales = 0;
	int div = 0, qtr = 0; // loop counters

	for (div = 0; div < NUM_DIVS; div++) // Process all qtrs for each div
	{
		for (qtr = 0; qtr < NUM_QTRS; qtr++)
		{
			cout << "Division " << (div + 1)
				<< ", Quarter " << (qtr + 1) << ": ";
			cin >> sales[div][qtr]; // add the sales to element [div][qtr]
		}
		cout << endl;
	}
	cout << endl; // Blank line

	for (div = 0; div < NUM_DIVS; div++)
	{
		for (qtr = 0; qtr < NUM_QTRS; qtr++)
		{
			totalSales = totalSales + sales[div][qtr];
		}
	}

	// Output the results
	cout << fixed << showpoint << setprecision(2);
	cout << "The total sales for the company are: $" << totalSales << endl;
	return 0;

}

