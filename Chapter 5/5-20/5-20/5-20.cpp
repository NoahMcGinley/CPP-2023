
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	int val, total = 0;

	ifstream inFile("C:\\Users\\SNM00013\\Desktop\\CPP-2022\\files\\data_files\\numericdata.txt");

	// Validates file's existence
	if (inFile)
	{
		inFile >> val;
		total += val;
		cout << val << endl;
		inFile >> val;
		total += val;
		cout << val << endl;
		inFile >> val;
		total += val;
		cout << val << endl;
		cout << "\nRead all data from numericdata.txt\n"
			<< "The sum of all the numbers is " << total;
	}
	else
	{
		cout << "File not found.";
	}
	// Closes file
	inFile.close();
}
