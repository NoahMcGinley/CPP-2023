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
	int months, fees;
	char choice;

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


	switch (choice)
	{
	case '1' : fees = ADULT * months;
		cout << "Your total membership fees are: " << fees;
		break;

	case '2': fees = CHILD * months;
		cout << "Your total membership fees are: " << fees;
		break;

	case '3': fees = SENIOR * months;
		cout << "Your total membership fees are: " << fees;
		break;

	case '4': fees = SENIOR * months;
		cout << "Exited program" << fees;
		break;

	default: cout << "Invalid choice";
	}

	return 0;
}