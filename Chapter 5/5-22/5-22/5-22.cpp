#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	// Initializes variables
	int total = 0;
	int count = 0;
	float sales;

	// Retrieves file
	ifstream inFile("C:\\Users\\SNM00013\\Desktop\\CPP-2022\\files\\data_files\\demosales.txt");

	// Validates file's existence
	if (!inFile)
	{
		cout << "File not found.";
	}
	else
	{
		// Loops to read file
		while (inFile >> sales)
		{
			cout << sales << endl;
			total += sales;
			count++;
		}
		// Closes file
		inFile.close();

		// Outputs total
		cout << "Sales data for " << count << " days read\n"
			<< "The total is: " << total;

	}

}

