#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/* Program 5-11
	Accepts no arguments
	uses for loop to convert Speeds*/

	// Initializes variables
	int kph;
	float mph;

	// Outputs table heading
	cout << "KPH\t\tMPH\n";
	cout << "------------------------------\n";

	// Formats output
	cout << fixed << setprecision(2);

	// Repeatedly calculates and prints KPH and MPH
	for (kph = 60; kph <= 130; kph += 10)
	{
		cout << kph << "\t\t";
		mph = kph * .6214;
		cout << mph << endl;
	}



	/* Program 5-11
	Accepts no arguments
	uses while loop to convert Speeds*/

	kph = 60;

	// Outputs table heading
	cout << "KPH\t\tMPH\n";
	cout << "------------------------------\n";

	// Formats output
	cout << fixed << setprecision(2);

	// Repeatedly calculates and prints KPH and MPH
	while (kph <= 130)
	{
		cout << kph << "\t\t";
		mph = kph * .6214;
		cout << mph << endl;
		kph += 10;
	}

}





