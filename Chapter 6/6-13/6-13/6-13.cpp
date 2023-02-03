
#include <iostream>
#include <iomanip>
using namespace std;

void getRadius();
void square(int);

/*######################################
	# Main accepts no arguments
	# prompts user for radius of a circle and calls
	# getRadius() to take input for radius and
	# assigns that input to the variable radius
	# It calls square() to get the square of the radius
	# using area = PI * square(radius)
###########################################*/
int main()
{
	// Prompts user and calls getRadius()
	cout << "What is the radius? ";
	getRadius();

	return 0;
}

/*######################################
	# getRadius() accepts no arguments
	# gets input from the user for radius
	# of a circle
###########################################*/
void getRadius()
{
	// Initializes variables
	int radius;

	// Takes input and calls square()
	cin >> radius;
	square(radius);
}

void square(int radius)
{
	// Formats output
	cout << fixed << showpoint << setprecision(2);

	// Calculates and output area
	double area = 3.14159 * radius;
	cout << "The area is " << area;
}