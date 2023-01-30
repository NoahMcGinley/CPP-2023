#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	/* Program 5-18
	Accepts no arguments
	takes input and writes it to a file*/

	// Initialize variables
	string friend1, friend2, friend3;

	// Takes input
	cout << "Enter a friend's first name: ";
	cin >> friend1;
	cout << "Enter a second friend's first name: ";
	cin >> friend2;
	cout << "Enter a third friend's first name: ";
	cin >> friend3;

	// Creates and opens file
	ofstream outFile("C:\\Users\\SNM00013\\Desktop\\CPP-2022\\files\\data_files\\demofriends.txt");

	// Validates file's existence
	if (outFile)
	{
		outFile << friend1 << endl << friend2 << endl << friend3;
		cout << "Names successfuly written to demofriends.txt";
	}
	else
	{
		cout << "File not found.";
	}
	// Closes file
	outFile.close();

}

