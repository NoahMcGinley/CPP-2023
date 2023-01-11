
#include <iostream>
using namespace std;

int main()
{
	/*Program 3-2
	Accepts no arguments
	Takes input form the user for length and width using a single cin statement
	Calculates and outputs the area of a rectangle*/

	// Defines variables
	int length, width, area;

	// Takes input
	cout << "Enter values for length and width, separated by a space: ";
	cin >> length >> width;

	// Calculates
	area = length * width;

	// Output
	cout << "The area of a rectangle with a length of " << length << " and a width of "
		<< width << " is " << area << endl;

	return 0;
}
