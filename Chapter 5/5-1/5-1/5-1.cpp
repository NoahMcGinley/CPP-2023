#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	int num;
	num = 4;

	// Output the value in num
	cout << "The variable num has the value: " << num << endl;
	cout << "I will now increment the variable num.\n\n";

	// Increment using postfix mode
	num++;
	cout << "The variable of num now has the value: " << num << endl;
	cout << "I will increment the variable num again.\n\n";

	// Increment using prefix mode
	++num;
	cout << "The variable of num now has the value: " << num << endl;
	cout << "I will now decrement the variable num.\n\n";

	// Decrement using postfix mode
	num--;
	cout << "The variable num now has the value: " << num << endl;
	cout << "I will decrement the variable num again.\n\n";

	// Decrement using prefix mode
	--num;
	cout << "The varaible num now has the value: " << num << endl;

	cout << num << endl;		// Displays 4
	cout << num++ << endl;		// Display 4, then icrement num
	cout << num << endl;		// Display 5
	cout << ++num << endl;		// Increments num, then display 6
	cout << endl;				// Display a blank line
	cout << num << endl;		// Displays 6
	cout << num-- << endl;		// Displays 6, then decrements num
	cout << num << endl;		// Displays 5
	cout << --num << endl;		// Displays num, then displays 4


	return 0;
}
