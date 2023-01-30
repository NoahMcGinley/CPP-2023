
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	/* Program 5-15
	Accepts no arguments
	Opens a file to write and then closes it*/

	// Create filestream and open the file
	ofstream outFile;
	outFile.open("C:\\Users\\SNM00013\\Desktop\\CPP-2022\\Files\\data_files\\namesdemo.txt");

	/* Alternate:
	ofstream outFile("demofile.txt")
	*/

	if (!outFile) // Checks to makes sure the file exists
	{
		cout << "File not found.";
	}
	else
	{
		// Output information to the user
		cout << "Writing these names to the file:\n"
			<< "Tom Bombadil\n"
			<< "Frodo Baggins\n"
			<< "Gandalf The White\n"
			<< "Goldberry\n" << endl;

		outFile
			<< "Tom Bombadil\n"
			<< "Frodo Baggins\n"
			<< "Gandalf The White\n"
			<< "Goldberry\n" << endl;

		// Closes file
		outFile.close();
		cout << "Success";
	}
}
