
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	string name;

	ifstream inFile("C:\\Users\\SNM00013\\Desktop\\CPP-2022\\files\\data_files\\demofriends.txt");

	// Validates file's existence
	if (inFile)
	{
		inFile >> name;
		cout << name << endl;
		inFile >> name;
		cout << name << endl;
		inFile >> name;
		cout << name << endl;
		cout << "Read all names from demofriends.txt";
	}
	else
	{
		cout << "File not found.";
	}
	// Closes file
	inFile.close();
}
