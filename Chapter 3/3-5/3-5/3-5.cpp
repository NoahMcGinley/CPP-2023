#include <iostream>
using namespace std;

int main()
{
	/*Program 3-4
	Accepts no arguments
	Takes input and calulates area of a circle*/

	// Defines variable and takes input
	int radius;
	double area;
	const double PI = 3.14159;

	// Takes input
	cout << "Enter a value for the radius of a circle: ";
	cin >> radius;

	// Performs calculation
	area = PI * pow(radius, 2);

	// Output
	cout << "The area of a cricle with the radius of " << radius << " is " << area;

	return 0;

}