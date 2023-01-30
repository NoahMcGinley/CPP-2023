#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	/*Program 4-21
	accepts no arguments
	Prompts the user for a part number
	If the part number is valid, it outputs the price*/

	// Defines variables
	const double PRICE_A = 249.99, PRICE_B = 199.00;
	string partNum;
	float price;

	// Sets precision
	cout << fixed << showpoint << setprecision(2);

	// Takes input
	cout << "The headphone part numbers are: \n";
	cout << "Nose Cancelling headphones: part number S-29A\n";
	cout << "Wireless: part nuber S-298\n";
	cout << "Enter the part number of the ehadphones you wish to purchase: ";
	cin >> partNum;

	// Determines what the price is
	if (partNum == "S-29A")
	{
		cout << "The price for part number " << partNum << " is " << PRICE_A << endl;
	}
	else if (partNum == "S-29B")
	{
		cout << "The price for part number " << partNum << " is " << PRICE_B << endl;
	}
	else
		cout << partNum << " is an invalid part number.";

	return 0;
}