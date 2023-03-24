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
		<< "1. Exercise #2 - Test Scores\n"
		<< "2. Exercise #5 - Pointer Rewrite\n"
		<< "3. Exercise #8 - Mode Function\n"
		<< "4. Exercise #12 - Element Shifter\n"
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