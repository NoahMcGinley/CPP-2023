#include <iostream>
using namespace std;

int displayMenu(int);
{
	// Declares variables
	int choice;

	do
	{
		cout << "Welcome to the exercise menu! Enter a choice 1 - 5\n"
			<< "1. Exercise #12 - Grade Book\n"
			<< "2. Exercise 16 - World Series Champions\n"
			<< "3. Exercise #18 - Tic-Tac-Toe\n"
			<< "4. Exercise #19 - Magic 8 Ball\n"
			<< "5. Exit Program\n"
			<< "choice: ";
		cin >> choice;
		cout << "----------------------------------------------\n\n";
		return choice;

	} while (true);

	//(choice == 4 || choice == 3 || choice == 2 || choice == 1);

	return 0;
}