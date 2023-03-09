
#include <iostream>
using namespace std;

// Prototype Functions
int menu();
void accountValidation();
void accountModification();
void stringSelection();
void sortingOrders();

/*-----------------------------------------
# menu() accepts no aguments
# it outputs the menu and receives a choice
# from the user
-------------------------------------------*/
int main()
{
	int choice = 1;
	while (choice != 5)
	{
		// Receives choice from menu()
		choice = menu();

		// Determines from choice which function to call
		switch (choice)
		{
		case 1:
			accountValidation();
			break;
		case 2:
			accountModification();
			break;
		case 3:
			stringSelection();
			break;
		case 4:
			sortingOrders();
			break;
		case 5:
			cout << "Exited Program\n";
			break;
		}
	}
}
