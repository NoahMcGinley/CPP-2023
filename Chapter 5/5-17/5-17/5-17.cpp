#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	/* Program 5-17
	Accepts no arguments
	Prompts user for three numbers and writes
	numbers to file*/

	int number1, number2, number3;

	cout << "Enter a number: ";
	cin >> number1;
	cout << "Enter a second number: ";
	cin >> number2;
	cout << "Enter a third number: ";
	cin >> number3;

	ofstream outFile("C:\\Users\\SNM00013\\Desktop\\CPP-2022\\files\\data_files\\numbers.txt");

	if (!outFile)
	{
		cout << "file not found";
	}
	else
	{
		outFile << number1 << endl << number2 << endl << number3;
	}
	outFile.close();


}

