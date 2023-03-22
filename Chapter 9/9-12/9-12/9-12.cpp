#include <iostream>
using namespace std;

void getSales(double*, int);
double totalSales(double*, int);

// main accepts no arguments
int main()
{
	// Initializes variables
	const int SIZE = 4;
	double array[SIZE];
	double* arrayptr = array;

	// Calls getSales to have the user input the quarterly sales
	getSales(arrayptr, SIZE);

	// Gets the sum of the sales
	double total = totalSales(arrayptr, SIZE);

	// Outputs the total
	cout << "\nThe total for the four quarters is: " << total << endl;
}

// getSales accepts a double* and int, it loops to
// ask the user for the four sales
void getSales(double* arrayptr, int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter sales for quarter " << i + 1 << ": ";
		cin >> *arrayptr;
		arrayptr++;
	}
}

// totalSales accepts a double* and int
// it loops to calculate the sum of the array
double totalSales(double* arrayptr, int SIZE)
{
	double total = 0;
	for (int i = 0; i < SIZE; i++)
	{
		total += *arrayptr;
		arrayptr++;
	}
	return total;
}
