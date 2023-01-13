
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	/*Program 3-21
	accepts no arguments
	demonstrates three ways to use cin.get() to pause a program*/

	char ch; // Defines a char variable to take an input during pause
	int number;
	string firstName, lastName, fullName;

	/*cout << "THe program has paused once... Press Enter to move on. ";
	cin.get(ch);
	cout << "The program has paused a second time.. Press Enter again to move on. ";
	ch = cin.get();
	cout << "The program has paused a third time... Press Enter again to end the program. ";
	cin.get();*/

	
	cout << "Enter a number: ";
	cin >> number;
	cin.ignore(); // skip the next character in the keyboard buffer
	cout << "Enter a character: ";
	cin.ignore();
	ch = cin.get();
	cout << "Enter your first name: ";
	cin.ignore();
	getline(cin, firstName);
	cout << "Enter your last name: ";
	lastName = cin.get();
	cout << "\nThe Program has terminated. Thank you!\n";

	fullName = firstName + lastName;

	cout << "Hello " << fullName;

	return 0;
}