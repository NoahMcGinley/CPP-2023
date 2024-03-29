#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

void readFile();
void updateFile(vector<string>);
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
	readFile();
}


/*--------------------------------
# reafFile accepts no arguments
# It opens the file of athletes
# and puts the names into a vector
----------------------------------*/
void readFile()
{
	// Variables and files
	ifstream athleteFile(R"(C:\Users\SNM00013\Desktop\CPP-2022\files\data_files\demoAthletes.txt)");
	vector<string> nameList;
	string name;
	string newAthlete;
	int i = 0;

	// Validates file
	if (!athleteFile)
	{
		cout << "File not found.\n";
	}
	else
	{
		// Reads file to add to vector
		while (getline(athleteFile, name))
		{
			nameList.push_back(name);
			i++;
		}
		updateFile(nameList);
	}
	athleteFile.close();

}


/*--------------------------------
# addAthlete accepts a vector string
# It asks the name of the new athlete
# and adds it to the vector. It then
# writes the updated vector to the file
----------------------------------*/
void updateFile(vector<string> nameList)
{
	// Variables and files
	ofstream athleteFile(R"(C:\Users\SNM00013\Desktop\CPP-2022\files\data_files\demoAthletes.txt)");
	string newAthlete;
	int i = 0;

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
		nameList.push_back(newAthlete);

		// Loops through vector to write it to the file
		for (string name : nameList)
		{
			athleteFile << nameList[i] << endl;
			i++;
		}
	}
	athleteFile.close();
}