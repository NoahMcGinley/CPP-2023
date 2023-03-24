#include <iostream>
using namespace std;

// Prototype Functions
int menu();
void testScores();
void pointerRewrite();
//void modeFunction();
//void elementShifter();

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
			testScores();
			break;
		case 2:
			pointerRewrite();
			break;
		case 3:
		//	modeFunction();
			break;
		case 4:
		//	elementShifter();
			break;
		case 5:
			cout << "Exited Program\n";
			break;
		}
	}
}