#include <iostream>
using namespace std;

/*-------------------------------
# displayMenu() accepts no arguments
# it displays a menu and returns
# the users selection as choice
---------------------------------*/
int displayMenu()
{
	// Declares variables
	int choice;

	cout << "Welcome to the exercise menu! Enter a choice 1 - 5\n"
		<< "1. Exercise #12 - Grade Book\n"
		<< "2. Exercise 16 - World Series Champions\n"
		<< "3. Exercise #18 - Tic-Tac-Toe\n"
		<< "4. Exercise #19 - Magic 8 Ball\n"
		<< "5. Exit Program\n"
		<< "choice: ";
	cin >> choice;

	while (choice < 0 || choice > 5)
	{
		cout << "Invalid choice, choose a number 1-5: ";
		cin >> choice;
	}

	cout << "----------------------------------------------\n";

	cout << endl;
	return choice;
}