
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	/*Program 3-18
	Accepts no arguments
	Takes input in the form of rist and last name
	and the city they live in and outputs a summary*/

	// Define variables
	string name, city;

	// Input
	cout << "Enter your first and last name: ";
	getline(cin, name);
	cout << "Enter the city you live in: ";
	cin >> city;

	// Output
	cout << "Hello, " << name << endl;
	cout << "You live in " << city << endl;

	return 0;

}
