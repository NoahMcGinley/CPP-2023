#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	/*Program 3-15
	Accepts no arguments
	Outputs the same value different levels of precision*/

	// Initializes variables
	double quotient, number1 = 132.164, number2 = 26.91;

	// Perform calculations and output, decreasing the precision each time
	quotient = number1 / number2;
	cout << quotient << endl;
	cout << setprecision(5) << quotient << endl;
	cout << setprecision(4) << quotient << endl;
	cout << setprecision(3) << quotient << endl;
	cout << setprecision(2) << quotient << endl;
	cout << setprecision(1) << quotient << showpoint << endl;

	return 0;

}
