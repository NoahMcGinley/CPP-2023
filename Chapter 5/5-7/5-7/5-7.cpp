
#include <iostream>
using namespace std;

int main()
{
	int choice = 0;
	while (choice != 4)
	{
		do
		{
			cout << "\nWelcome to the Coffee Kraze Kiosk.\n"
				<< "Please make a selection from the options below:\n";
			cout << "1. Coffee ala Americana\n";
			cout << "2. Caramel Machiato\n";
			cout << "3. Mocha Frappe\n";
			cout << "4. Quit\n";
			cout << "Enter your selection: ";
			cin >> choice;
		} while (choice < 1 || choice > 4);

		switch (choice)
		{
		case 1:
			cout << "Here is your Coffee ala Americana. Enjoy!\n";
			break;
		case 2:
			cout << "Here is your  Caramel Machiato. Enjoy!\n";
			break;
		case 3:
			cout << "Here is your Mocha Frappe. Enjoy!\n";
			break;
		case 4:
			cout << "Exitied Program.\n";
			break;
		}
	}
}



