#include <iostream>
using namespace std;

// Prototype functions
void choice1();
void choice2();
void choice3();
void choice4();

/*###############################
# main accepts no arguments
# calls functions depending on the
# users choice in the menu
#################################*/
int main()
{
	// Defines variables
	char choice;

	// Shows menu and receives input
	cout << "Health Club Membership Menu\n";
	cout << "1. Standard Adult Membership\n";
	cout << "2. Child Membership\n";
	cout << "3. Senior Citizen Membership\n";
	cout << "4. Quit the Program\n";
	cout << "Enter your choice: ";
	cin >> choice;

	switch (choice)
	{
	case '1':
		choice1();
		break;
	case '2':
		choice2();
		break;
	case '3':
		choice3();
		break;
	case '4':
		choice4();
		break;
	default: cout << "Invalid choice";
	}

	return 0;
}

/*#####################################
# choice1 accepts no arguments
# calculates fees based on user input
########################################*/
void choice1()
{
	const int ADULT = 40;
	int months, fees;

	cout << "\nFor how many months? ";
	cin >> months;
	fees = months * ADULT;
	cout << "Your total fees are $" << fees << endl;
}

/*#####################################
# choice2 accepts no arguments
# calculates fees based on user input
########################################*/
void choice2()
{
	const int CHILD = 20;
	int months, fees;

	cout << "\nFor how many months? ";
	cin >> months;
	fees = months * CHILD;
	cout << "Your total fees are $" << fees << endl;
}

/*#####################################
# choice3 accepts no arguments
# calculates fees based on user input
########################################*/
void choice3()
{
	const int SENIOR = 30;
	int months, fees;

	cout << "\nFor how many months? ";
	cin >> months;
	fees = months * SENIOR;
	cout << "Your total fees are $" << fees << endl;
}

/*#####################################
# choice4 accepts no arguments
# Closes program
########################################*/
void choice4()
{
	cout << "\nExited Program\n";
}