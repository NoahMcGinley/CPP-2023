#include <iostream>
#include <vector>
using namespace std;

vector<double> selectionSort(vector<double>);
void swap(double&, double&);

/*----------------------------------------------
#  accountValidation() accepts no arguments
# it sorts the array of account numbers and then
# it asks the user for an account number and
# determines the position that the account number
# is located within the array using a binary search method
------------------------------------------------*/
void accountModification()
{
	// Initializes vector
	vector<double>numbers{
		5658845,	4520125,	7895122,	8777541,	8451277,	1302850,
		8080152,	4562555,	5552012,	5050552,	7825877,	1250255,
		1005231,	6545231,	3852085,	7576651,	7881200,	4581002, };

	// Sorts vector
	numbers = selectionSort(numbers);

	// Loops until user enters 1111111
	while (true)
	{
		// Variables
		double i = 0, position = -1;
		double input;
		bool found = false;

		// Takes account number from user
		cout << "Enter an account number to search.\nEnter 1111111 to exit.\n> ";
		cin >> input;

		// Exits if user enters 1111111
		if (input == 1111111)
		{
			cout << "Exited modified account checker.\n\n\n";
			break;
		}

		// Variables
		int first = 0, last = numbers.size();

		////// Searches array using binary method
		while (!found && first <= last)
		{
			int middle = (first + last) / 2;

			if (numbers[middle] == input)
			{
				found = true;
				position = middle;
			}
			if (numbers[middle] >= input)
			{
				last = middle - 1;
			}
			if (numbers[middle] <= input)
			{
				first = middle + 1;
			}
		}

		// Outputs where the account number was found, if at all
		if (position == -1)
		{
			cout << "Account number not found in list.\n\n";
		}
		else
		{
			cout << "The account number you entered is #" << position + 1 << "\n\n";
		}
	}
	cout << endl;
}


/*----------------------------------------------
#  selection() accepts vector numbers
# it sorts the vector using the selection sort method
# and returns the vector
------------------------------------------------*/
vector<double> selectionSort(vector<double>numbers)
{
	// Variables
	double minIndex, minValue;

	for (double start = 0; start < (numbers.size() - 1); start++)
	{
		minIndex = start;
		minValue = numbers[start];
		for (double i = start + 1; i < numbers.size(); i++)
		{
			if (numbers[i] < minValue)
			{
				minValue = numbers[i];
				minIndex = i;
			}
		}
		swap(numbers[minIndex], numbers[start]);
	}
	return numbers;
}

// Swaps values
void swap(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}