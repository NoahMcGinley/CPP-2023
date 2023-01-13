#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// accepts no arguments

	// Defines variables
	float length, width, height, volume, cost, charge, profit;
	const float CHARGE_PER_CUBIC_FOOT = .5;
	const float COST_PER_CUBIC_FOOT = .23;

	// Input
	cout << "Input the crate's length: ";
	cin >> length;
	cout << "\nInput the crate's width: ";
	cin >> width;
	cout << "\nInput the crate's height: ";
	cin >> height;

	// Calculates
	volume = length * width * height;
	cost = volume * COST_PER_CUBIC_FOOT;
	charge = volume * CHARGE_PER_CUBIC_FOOT;
	profit = charge - cost;

	// Output
	cout << "\nThe volume of the crate is: \t\t"<< "$" << volume << endl;
	cout << "The cost of building the crate is: \t" << "$" << cost << endl;
	cout << "The customer's charge is: \t\t" << "$" << charge << endl;
	cout << "The profit made is: \t\t\t" << "$" << profit << endl;

}
