#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	/*Accepts no arguments
	asks user for input and displays
	the words in an existing paragraph*/

	// Defines variables
	string 
		name,
		city,
		college,
		profession,
		animal,
		petName;
	int age;

	// Takes input
	cout << "Enter a name: ";
	cin >> name;
	cout << "Enter the name of a city: ";
	cin >> city;
	cout << "Enter the name of a college: ";
	cin >> college;
	cout << "Enter the name of a profession: ";
	cin >> profession;
	cout << "Enter the name of an animal: ";
	cin >> animal;
	cout << "Enter a pet's name: ";
	cin >> petName;
	cout << "Enter an age: ";
	cin >> age;

	// Outputs by injecting variables into existing paragraph
	cout << "Once upon a time there was a person named " << name
		<< " who roamed the streets of " << city
		<< ". At the\nage of " << age
		<< ", " << name
		<< " went to college at " << college
		<< ". " << name
		<< " graduated and went to work as a " << profession
		<< ". Then, " << name
		<< "\ncaptured a(n) " << animal
		<< " named " << petName
		<< ". They both went on to fulfill their dreams.";

	return 0;

}