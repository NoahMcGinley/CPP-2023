#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// Prototype functions
int displayMenu();
void gradeBook();
void worldSeries();
void ticTacToe();
void magic8Ball();
void gasPrices();

/*--------------------
# main accepts no arguments
# serves as the menu for the
# different exercises and calls
# the corresponding function depending
# on the users choice
----------------------*/
int main()
{
	while (true)
	{
		int choice = displayMenu();
		if (choice == 1)
		{
			gradeBook();
		}
		else if (choice == 2)
		{
			worldSeries();
		}
		else if (choice == 3)
		{
			ticTacToe();
		}
		else if (choice == 4)
		{
			magic8Ball();
		}
		else if (choice == 5)
		{
			gasPrices();
		}
		else if (choice == 6)
		{
			cout << "Exited Program.\n";
			break;
		}
	}
	return 0;
}