
#include <iostream>
using namespace std;

int main()
{
	// Initialize variables
	double regularWages,
		basePayRate = 18.5,
		regularHours = 40,
		overtimeWages,
		overtimePayRate = 27.78,
		overtimeHours = 18,
		totalWages;

	// Calculates wages
	regularWages = basePayRate * regularHours;
	overtimeWages = overtimePayRate * overtimeHours;
	totalWages = regularWages + overtimeWages;

	// Outputs wages
	cout << "Your wages for this week are: $" << totalWages << endl;

	return 0;

}
