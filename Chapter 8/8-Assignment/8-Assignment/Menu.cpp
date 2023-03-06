#include <iostream>
using namespace std;

/*-----------------------------------------
# menu() accepts no aguments
# it outputs the menu and receives a choice
# from the user
-------------------------------------------*/
int menu()
{
	// Declares variables
	int choice;

	// Outputs menu
	cout << "Welcome to the Exercise Menu!\n"
		<< "1. Exercise #1 - Charge Account Validation\n"
		<< "2. Exercise #4 - Charge Account Modification\n"
		<< "3. Exercise #6 - String Selection Sort\n"
		<< "4. Exercise #10 - Sorting Orders\n"
		<< "5. Quit\n"
		<< "Choice: ";
	cin >> choice;

	// Validates and returns choice
	while (choice < 0 || choice > 5)
	{
		cout << "Enter a number 1-5: ";
		cin >> choice;
	}
	cout << "--------------------------------------------------\n\n";
	return choice;
}