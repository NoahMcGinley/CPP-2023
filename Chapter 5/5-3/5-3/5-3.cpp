#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	/*Program 5-3
	accepts no arguments
	demonstrates a simple counted while loop*/

	// Initalize counter variable
	int counter = 1;
	
	// Loop as long as counter is less than 5
	while (counter <= 10)
	{
		cout << "This is output " << counter;
		cout << "\tHello World!\n";
		counter++;
	}

	return 0;
}
