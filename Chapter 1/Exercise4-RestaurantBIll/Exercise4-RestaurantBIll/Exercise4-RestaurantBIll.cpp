
#include <iostream>
using namespace std;

int main()
{
	// Sets constants
	const double salesTax = .065, tip = .2;
	double mealCost = 88.67;

	// Defines and calculates variables
	double tax, tipCost, bill;

	tax = mealCost * salesTax;
	tipCost = mealCost * tip;
	bill = tax + tipCost + mealCost;

	// Outputs to user
	cout << "Meal Cost:\t$" << mealCost << "\n";
	cout << "Total Tax:\t$" << tax << "\n";
	cout << "Total Tip:\t$" << tipCost << "\n";
	cout << "Total Bill:\t$" << bill << "\n";

	return 0;
}


