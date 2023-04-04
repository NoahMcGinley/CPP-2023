#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

void updateFile(string[], int);
void addAthlete();

int main()
{
	addAthlete();
}

/*--------------------------------
# addAthlete accepts no arguments
# it calls readFile() and scoreSort()
----------------------------------*/
void addAthlete()
{
	const int SIZE = 4;
	string arry[4][3][4] =
	{
				 { {"a", "b", "c", "d"}, {"e", "f", "g", "h"}},
				 { {"i", "j", "k", "l"}, {"m", "n", "o", "p"}, {"q", "r", "s", "t"}}
	};
}


/*--------------------------------
# addAthlete accepts a string array
# It asks the name of the new athlete
# and adds it to the vector. It then
# writes the updated vector to the file
----------------------------------*/
void updateFile(string athleteArry[], int SIZE)
{
	// Variables and files
	ofstream athleteFile(R"(C:\Users\SNM00013\Desktop\CPP-2022\files\data_files\demoAthletes.txt)");
	string newAthlete;

	// Validates file
	if (!athleteFile)
	{
		cout << "File not found";
	}
	else
	{
		// Asks user for the name of the new athlete
		cout << "Enter the name of the athlete you would like to enter: ";
		getline(cin, newAthlete);

		// Loops through vector to write it to the file
		for (int i = 0; i < SIZE; i++)
		{
			cout << athleteArry[i] << endl;
			athleteFile << athleteArry[i] << endl;
		}
		athleteFile << newAthlete << endl;

	}
	athleteFile.close();
}