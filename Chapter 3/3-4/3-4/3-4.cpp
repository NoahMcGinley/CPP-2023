
#include <iostream>
using namespace std;

int main()
{
	/*Program 3-4
	Accepts no arguments
	Takes unput from the user for the length of one side of a square
	and finds the area of the square isng the pow() function*/

	// Defines variable and takes input
	int length, area;
	cout << "Enter the length of one side of the square: ";
	cin >> length;

	// Performs calculation
	area = pow(length, 2);

	// Output
	cout << "The area of a square with a side measurement of " << length << " is " << area;

	return 0;

}