#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	int days;
	float sales;

	ofstream outFile("C:\\Users\\SNM00013\\Desktop\\CPP-2022\\files\\data_files\\demosales.txt");

	cout << "Enter the numer of days to enter data for: ";
	cin >> days;

	// Validates file's existence
	if (outFile)
	{
		for (int i = 1; i <= days; i++)
		{
			cout << "Enter the sales for day " << i << ": ";
			cin >> sales;
			outFile << sales << endl;
		}
	}
	else
	{
		cout << "File not found.";
	}
	// Closes file
	outFile.close();

}
