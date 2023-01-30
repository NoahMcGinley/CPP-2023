
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Exercise #27
	// Initalializes variables
	char choice;

	// Explains program
	cout << "Exercise 27 - WiFi Diagnostic Tree\n";
	cout << "Enter your answers as either 'y' or 'n'\n\n";

	// Input
	cout << "Reboot computer and try to connect\n";
	cout << "Did that fix the problem? ";
	choice = getchar();
	cin.ignore();

	// Uses if statements to determine whether or not the probelm has been solved
	if (choice == 'y' || choice == 'Y')
	{
		cout << "Netflix and Chill";	// Output if the the problem has been solved
	}
	// Checks router
	else
	{
		cout << "\nReboot router and try to connect";
		cout << "\nDid that fix the problem? ";
		choice = getchar();
		cin.ignore();
		if (choice == 'y' || choice == 'Y')
		{
			cout << "Netflix and Chill";
		}
		// Checks cables
		else
		{
			cout << "\nVerify cables are firmly attached";
			cout << "\nDid that fix the problem? ";
			choice = getchar();
			cin.ignore();
			if (choice == 'y' || choice == 'Y')
			{
				cout << "Netflix and Chill";
			}
			// Replace router
			else
			{
				cout << "\nMove router to better location";
				cout << "\nDid that fix the problem? ";
				choice = getchar();
				cin.ignore();
				if (choice == 'y' || choice == 'Y')
				{
					cout << "Netflix and Chill";
				}
				else
				{
					cout << "Get a new router";
					
				}
			}
		}
	}

}