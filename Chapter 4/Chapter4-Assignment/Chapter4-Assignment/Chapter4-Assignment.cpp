#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	/*Exercise 101 - Exercise menu
	Accepts no arguments*/

	// Initializes variables
	int menuChoice;

	// Receives Input
	cout << "Welcome to the Chapter 4 Exercise menu\n"
		<< "Please choose from the following choices.\n"
		<< "1.\t\tExercise 4-11 - Math Tutor Revision\n"
		<< "2.\t\tExercise 4-17 - Pole Vault Personal Best\n"
		<< "3.\t\tExercise 4-23 - Geometry Calculator\n"
		<< "4.\t\tExercise 4-27 - WiFi Diagnostic\n"
		<< "5.\t\tExercise 4-28 - Restaurant Selector\n"
		<< "6.\t\tQuit\nChoice: ";
	cin >> menuChoice;
	cin.ignore();
	cout << "-----------------------------\n\n";


	// Runs programs
	switch (menuChoice)
	{
	case 1:
		{
		////////////////////////////////////////////////////////////////
			
		// Program 4-11
		// Defines variables
		int num1, num2, answer, attempt;
		unsigned seed = time(0);

		// Generates numbers
		srand(seed);
		num1 = rand() % 1000;
		num2 = rand() % 1000;

		// Calculates answer
		answer = num1 + num2;

		// Output question
		cout << "Exercise 4-11 - Math Tutor Revision\n\n";
		cout << "   " << num1 << endl << " + " << num2 << "\n --------\n";
		cout << "Solve the equation: ";
		cin >> attempt;

		// Determines if the user is right, if they are not, it outputs the correct answer
		if (attempt == answer)
		{
			cout << "Congratulations! You are correct.\n";
		}
		else
		{
			cout << "Wrong! The correct answer is:";
			cout << "\n\n   " << num1 << endl << " + " << num2 << "\n --------\n   " << answer
				<< "\n";
		}

		////////////////////////////////////////////////////////////////
		}
		break;
	case 2:
		{
		////////////////////////////////////////////////////////////////

		// Exercise 4-17
		string name, date1, date2, date3;
		float height1, height2, height3;
		int max, min;

		cout << "Exercise 4-17 - Pole Vault Personal Best\n\n";

		// Takes input
		cout << "Enter the name of the pole vaulter: ";
		cin >> name;
		cout << "\nEnter the height for the first vault: ";
		cin >> height1;
		cout << "Enter the date on which that vault occured (mm/dd/yyyy): ";
		cin >> date1;
		cout << "\nEnter the height for the second vault: ";
		cin >> height2;
		cout << "Enter the date on which that vault occured (mm/dd/yyyy): ";
		cin >> date2;
		cout << "\nEnter the height for the third vault: ";
		cin >> height3;
		cout << "Enter the date on which that vault occured (mm/dd/yyyy): ";
		cin >> date3;
		cout << "\n";

		// Determines order
		if (height3 <= height2)
		{
			if (height2 <= height1)
			{
				cout << name << "'s first vault on " << date1 << " is " << height1 << " meters\n";
				cout << name << "'s second vault on " << date2 << " is " << height2 << " meters\n";
				cout << name << "'s third vault on " << date3 << " is " << height3 << " meters\n";
			}
			else if (height2 >= height1)
			{
				cout << name << "'s first vault on " << date2 << " is " << height2 << " meters\n";
				cout << name << "'s second vault on " << date1 << " is " << height1 << " meters\n";
				cout << name << "'s third vault on " << date3 << " is " << height3 << " meters\n";
			}
		}
		else if (height3 >= height2);
		{
			if (height2 >= height1)
			{
				cout << name << "'s first vault on " << date3 << " is " << height3 << " meters\n";
				cout << name << "'s second vault on " << date2 << " is " << height2 << " meters\n";
				cout << name << "'s third vault on " << date1 << " is " << height1 << " meters\n";
			}
			else if (height2 <= height1)
			{
				cout << name << "'s first vault on " << date3 << " is " << height3 << " meters\n";
				cout << name << "'s second vault on " << date1 << " is " << height1 << " meters\n";
				cout << name << "'s third vault on " << date2 << " is " << height2 << " meters\n";
			}
		}
		
		////////////////////////////////////////////////////////////////
		}
		break;
	case 3:
		{

		////////////////////////////////////////////////////////////////

		// Exercise 4-11
		// Menu
		int choice;

		cout << "Geometry Calculator\n"
			<< "1. Calculate the Area of a Circle\n"
			<< "2. Calculate the Area of a Rectangle\n"
			<< "3. Calculate the Area of a Triangle\n"
			<< "4. Quit\n"
			<< "Choice: ";
		cin >> choice;

		// Circle
		if (choice == 1)
		{
			// Initializes variables
			const double pi = 3.14159;
			float radius, area;

			// Input
			cout << "\nCalculating the area of a circle\n"
				<< "Enter a non negative number in as the radius: ";
			cin >> radius;

			// Validation, calculation, and output
			if (radius >= 0)
			{
				area = (pi * (pow(radius, 2)));
				cout << "The area of the circle is: " << area << "\n";
			}
			else
			{
				cout << "Invalid input, enter a non negative number";
			}
		}

		// Rectangle
		else if (choice == 2)
		{
			// Initializes variables
			float length, width, area;

			// Input
			cout << "\nCalculating the area of a rectagnle\n";
			cout << "Enter the length: ";
			cin >> length;
			cout << "Enter the width: ";
			cin >> width;

			// Validation, calculation, and output
			if (length >= 0 && width >= 0)
			{
				area = (length * width);
				cout << "The area of the rectangle is: " << area << "\n";
			}
			else
			{
				"Invalid input, enter non negative numbers";
			}
		}

		// Triangle
		else if (choice == 3)
		{
			// Initializes variables
			float base, height, area;

			// Input
			cout << "\nCalculating the area of a triangle\n";
			cout << "Enter the base: ";
			cin >> base;
			cout << "Enter the height: ";
			cin >> height;

			// Validation, calculation, and output
			if (base >= 0 && height >= 0)
			{
				area = (base * height) * .5;
				cout << "The area of the triangle is: " << area << "\n";
			}
			else
			{
				"Invalid input, enter non negative numbers";
			}

		}

		// Quit
		else if (choice == 4)
		{
			cout << "\nExited Program\n";
		}

		}


		break;
	case 4:
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
	break;
	case 5:
	{
		// Exercise 28 - Restaurant Selector
	// Initializes variables
		char vegetarians, vegans, glutenfrees;

		// Input
		cout << "Are any of your party members vegetarian? ";
		vegetarians = getchar();
		cin.ignore();
		cout << "Are any of your party members vegan? ";
		vegans = getchar();
		cin.ignore();
		cout << "Are any of your party members gluten-free? ";
		glutenfrees = getchar();
		cin.ignore();

		// Determines which restaurants are available to eat at
		if ((vegetarians == 'y' || vegetarians == 'Y') && (vegans == 'y' || vegans == 'Y') && (glutenfrees == 'y' || glutenfrees == 'Y'))
		{
			cout << "\nYour choices are:\n"
				<< "The Chef's Kitchen\n";
		}
		else if ((vegetarians == 'y' || vegetarians == 'Y') && (vegans == 'n' || vegans == 'N') && (glutenfrees == 'y' || glutenfrees == 'Y'))
		{
			cout << "\nYour choices are:\n"
				<< "Main Street Pizza Company\n"
				<< "Corner Cafe\n"
				<< "The Chef's Kitchen\n";
		}
		else if ((vegetarians == 'y' || vegetarians == 'Y') && (vegans == 'n' || vegans == 'N') && (glutenfrees == 'n' || glutenfrees == 'N'))
		{
			cout << "\nYour choices are:\n"
				<< "Main Street Pizza Company\n"
				<< "Corner Cafe\n"
				<< "Mama's Fine Italian\n"
				<< "The Chef's Kitchen\n";
		}
		else if ((vegetarians == 'N' || vegetarians == 'n') && (vegans == 'n' || vegans == 'N') && (glutenfrees == 'y' || glutenfrees == 'Y'))
		{
			cout << "\nYour choices are:\n"
				<< "Main Street Pizza Company\n"
				<< "Corner Cafe\n"
				<< "The Chef's Kitchen\n";
		}
		else if ((vegetarians == 'N' || vegetarians == 'n') && (vegans == 'y' || vegans == 'Y') && (glutenfrees == 'n' || glutenfrees == 'N'))
		{
			cout << "\nYour choices are:\n"
				<< "Corner Cafe\n"
				<< "The Chef's Kitchen\n";
		}
		else if ((vegetarians == 'N' || vegetarians == 'n') && (vegans == 'n' || vegans == 'N') && (glutenfrees == 'n' || glutenfrees == 'N'))
		{
			cout << "\nYour choices are:\n"
				<< "Hoe's Gourmet Burgers\n"
				<< "Main Street Pizza Company\n"
				<< "Mama's Fine Italian\n"
				<< "Corner Cafe\n"
				<< "The Chef's Kitchen\n";
		}
		else
		{
			cout << "\nInput either 'y' or 'n'";
		}
	}
	break;
	default:
	{
		cout << "Invalid choice, enter a number between 1 and 4";
	}
	}
	

	return 0;
}

