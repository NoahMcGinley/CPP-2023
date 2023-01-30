
#include <iostream>
using namespace std;

int main()
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
