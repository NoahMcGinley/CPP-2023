
#include <iostream>
using namespace std;

int main()
{
	// Defines variables
	double sales1, sales2, salesPercent,
		revenue1, revenue2;
	
	// Assigns data to variables
	sales1 = 8600000;
	sales2 = 10000000;
	salesPercent = .58;

	// Calculates output for both scenarios
	revenue1 = sales1 * salesPercent;
	revenue2 = sales2 * salesPercent;

	// Outputs to user
	cout << "If total sales are " << sales1 << " million the midwest division is estimated to generate " << revenue1 << " million\n";
	cout << "If total sales are " << sales2 << " million the midwest division is estimated to generate " << revenue2 << " million";
}