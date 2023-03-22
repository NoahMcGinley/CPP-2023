#include <iostream>
#include <iomanip>
using namespace std;

/*--------------------------------------
# main accepts no arguments
# it uses dynamically allocated array
# of days to calculate and output the average
----------------------------------------*/
int main()
{
	// Initialize variables
	double* sales = nullptr,
		total = 0.0,
		average;
	int numDays, count;

	// Get input from the user for the number of days
	cout << "How many days of sales do you want"
		<< " to enter sales for? ";
	cin >> numDays;

	// Dynamically allocate an array large enough
	// to hold the array for sales
	sales = new double[numDays];

	// Loop to get the sales amounts for each day
	cout << "Enter the sales amounts for each day.\n";
	for (count = 0; count < numDays; count++)
	{
		cout << "Day " << (count + 1) << ": ";
		cin >> sales[count];
	}

	// Loop to total the sales
	for (count = 0; count < numDays; count++)
	{
		total = total + sales[count];
	}
	average = total / numDays;

	// Output results
	cout << fixed << showpoint << setprecision(2);
	cout << "\n\nTotal Sales: $" << total << endl;
	cout << "Average Sales: $" << average << endl;

	// Free up dynamically allocated memory
	delete[] sales;
	sales = nullptr;

}
