#include <iostream>
using namespace std;

int regFees();

int main()
{
	regFees();
}

/*###############################
# regFees accepts no arguments
# gets registration fees,
# validates, and returns it
###############################*/
int regFees()
{
	// Declares variables
	int registration;

	// Receives input
	cin >> registration;

	// Validates and returns input
	while (registration < 0)
	{
		cout << "Invalid input, enter a non negative number: ";
		cin >> registration;
	}
	return registration;
}

