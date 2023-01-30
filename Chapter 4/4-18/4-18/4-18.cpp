#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	/* Program 4-18
	accepts no arguments
	Presents the user with a menu*/

	// Defines variables
	const int ADULT = 40, CHILD = 20, SENIOR = 30, QUIT = 4;
	int choice, months, fees;

	// Shows menu and receives input
	cout << "Health Club Membership Menu\n";
	cout << "1. Standard Adult Membership\n";
	cout << "2. Child Membership\n";
	cout << "Senior Citizen Membership\n";
	cout << "Quit the Program\n";
	cout << "Enter your choice: ";
	cin >> choice;
	cout << "\nFor how many months? ";
	cin >> months;


	
	if (!(choice == 1 || choice == 2 || choice == 3 || choice == 4))
	{
		cout << "Invalid choice. Only enter values 1-4";
	}
	else if (choice == 1)
	{
		fees = ADULT * months;
		cout << "Your total membership fees are: " << fees;
	}
	else if (choice == 2)
	{
		fees = CHILD * months;
		cout << "Your total membership fees are: " << fees;
	}
	else if (choice == 3)
	{
		fees = SENIOR * months;
		cout << "Your total membership fees are: " << fees;
	}
	else if (choice == 4)
	{
		cout << "Exited the program";
	}

	return 0;
}