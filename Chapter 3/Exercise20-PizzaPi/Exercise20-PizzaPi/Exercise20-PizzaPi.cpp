#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	/* Accepts no arguments
	asks user for size of pizza and determines
	the number of slices that can be made*/

	// Defines Variables
	int diameter, numPeople, slicesPerPerson;
	float numSlices, totalPizzas, area, radius;
	const float pi = 3.14159265359;

	// Input for diameter
	cout << "Enter the diamter of the pizza in inches: ";
	cin >> diameter;

	// Calculates slices per pizza
	radius = diameter / 2;
	area = pi * pow(radius, 2);
	numSlices = area / 14.125;

	// Output for amount of slices
	cout << setprecision(3) << "\nA " << diameter << " inch pizza contains about " << numSlices << " slices" << endl;

	// Input for people data
	cout << "\nHow many people will be attending? ";
	cin >> numPeople;
	cout << "\nHow many slices per person? ";
	cin >> slicesPerPerson;

	// Calculates total pizzas needed
	totalPizzas = (numPeople * slicesPerPerson) / numSlices;

	// Outputs total pizaas needed
	cout << setprecision(2) << "You will need to buy " << totalPizzas << " total pizzas.";

	return 0;

}