
#include <iostream>
using namespace std;

int main()
{
	/* Program 3-1
	Receives no arguments
	Takes input from the user in the form of length and width
	Calculates and outputs the area of a rectangle*/

	// Defines variables
	int length, width, area;

	// Takes input
	cout << "Input a value for length: ";
	cin >> length;

	cout << "Input a value for width: ";
	cin >> width;

	// Calculates and outputs result
	area = length * width;
	cout << "The area of a rectangle with a length of " << length << " and width of " << width
		<< " is " << area << endl;

}
