#include <iostream>
#include <vector>
using namespace std;

/*------------------------------------------
# accountValidation() accepts no arguments
# it asks the user for an account number and
# determines the position that the account number
# is located within the array
--------------------------------------------*/
void accountValidation()
{
	// Initializes vector
	vector<double>numbers{
		5658845,	4520125,	7895122,	8777541,	8451277,	1302850,
		8080152,	4562555,	5552012,	5050552,	7825877,	1250255,
		1005231,	6545231,	3852085,	7576651,	7881200,	4581002, };

	// Loops until user enters 1111111
	while (true)
	{
		// Variables
		int i = 0, position = -1;
		double input = 1;
		bool found = false;

		// Takes account number from user
		cout << "Enter an account number to search\nEnter 1111111 to exit\n> ";
		cin >> input;

		if (input == 1111111)
		{
			cout << "Exited account number checker.\n\n";
			break;
		}

		// Loops through vector to find a match
		while (i < numbers.size() && !found)
		{
			if (numbers[i] == input)
			{
				found = true;
				position = i;
			}
			i++;
		}

		// Outputs where the account number was found, if at all
		if (position == -1)
		{
			cout << "Account number not found in list" << "\n\n";
		}
		else
		{
			cout << "The account number you entered is #" << position + 1 << "\n\n";;
		}
	}
	cout << endl;
}