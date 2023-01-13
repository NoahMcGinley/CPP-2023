
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/* Program 3-12
	Accepts no arguments
	Outputs a series of numbers with no formatiing specifier*/

	// Initialize varialbes
	int num1 = 2897, num2 = 5, num3 = 837, num4 = 34, num5 = 7,
		num6 = 1623, num7 = 390, num8 = 3456, num9 = 12;

	// Displays 3 rows of 3 integers
	cout << setw(7) <<  num1 << " " << setw(7) << num2 << " " << setw(7) << num3 << endl;
	cout << setw(7) << num4 << " " << setw(7) << num5 << " " << setw(7) << num6 << endl;
	cout << setw(7) << num7 << " " << setw(7) << num8 << " " << setw(7) << num9 << endl;
	
	return 0;

}

