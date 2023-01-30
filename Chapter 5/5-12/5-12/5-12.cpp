#include <iostream>
using namespace std;

int main()
{
	/* Program 5-12
	Accepts no arguments
	User controlled loop to input and accumulate
	a total number*/

	// Initializes variables
	int days;
	float total, input;
	total = 0;
	
	// Input
	cout << "How many days do you want to enter sales for? ";
	cin >> days;

	// Accumulates total
	for (int count = 1; count <= days; count++)
	{
		cout << "Enter sales for day " << count << ": ";
		cin >> input;
		total += input;
	}

	// Output
	cout << "The total sales for " << days << " days is: " << total;

	return 0;
}
