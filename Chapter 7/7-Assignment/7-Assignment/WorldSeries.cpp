#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*-------------------------------
# worldSeries() accepts no arguments
# it reads from Teams.txt and WorldSeriesWinners.txt
# and asks the user to enter a team. It then outputs
# how many times that team has won the world series
-----------------------------------*/
void worldSeries()
{
	// Decalres and initializes variables
	string teamList[29], winnerList[108], teamChoice, winner;
	ifstream inFileTeams(R"(C:\Users\SNM00013\Desktop\CPP-2022\files\data_files\Teams.txt)");
	ifstream inFileWinners(R"(C:\Users\SNM00013\Desktop\CPP-2022\files\data_files\WorldSeriesWinners.txt)");
	int i = 0, winCount = 0;

	// Validates files
	if (!inFileTeams || !inFileWinners)
	{
		cout << "File not found.\n";
	}
	else
	{
		//// Reads and outputs teams within file
		cout << "Enter one of the teams below to find their\nnumber of world series victories\n";
		while (getline(inFileTeams, teamList[i]))
		{
			cout << teamList[i] << endl;
			i++;
		}
		cout << "\nTeam (including city name): ";
		cin.ignore();
		getline(cin, teamChoice);
		i = 0;

		//// Determines world sereis wins
		while (getline(inFileWinners, winnerList[i]))
		{
			i++;
		}

		// Adds to wincount if the users choice of team matches the winner for
		// that given year
		for (int i = 0; i < 108; i++)
		{
			if (teamChoice == winnerList[i])
				winCount++;
		}

		// Validates team
		if (winCount <= 0)
		{
			cout << "This team either does not exist or does not have any world series wins.\n\n";
		}
		else
		{
			//// Outputs final result
			cout << "The " << teamChoice << " have " << winCount << " world series win(s)\n\n";
		}

		// Closes files
		inFileTeams.close();
		inFileWinners.close();
	}
}