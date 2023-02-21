#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// Prototype functions
void gradeBook();
void worldSeries();
//void ticTacToe();
void magic8Ball();

/*--------------------
# main accepts no arguments
# serves as the menu for the
# different exercises and calls
# the corresponding function depending
# on the users choice
----------------------*/
int main()
{
	choice = displayMenu();

	if (choice == 1)
	{
		gradeBook();
	}
	else if (choice == 2)
	{
		worldSeries();
	}
	else if (choice == 4)
	{
		magic8Ball();
	}
	else if (choice == 5)
	{
		cout << "Exited Program\n";
		break;
	}
	else
	{
		cout << "Invalid input.\n";
	}
}

////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

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
	}
}

////////////////////////////////////////////////////////////////////////////

// Prototype functions
string getResponse();

/*-----------------------------------
# magic8Ball() accepts no arguments
# prompts user for question and randomly
# selects an answer from 8_ball_responses.txt
-------------------------------------*/
void magic8Ball()
{
	char game = 'y';
	string response;

	while (tolower(game) == 'y')
	{
		cout << "What is your question?: ";
		cin >> response;
		response = getResponse();
		cout << response;
		cout << "Would you like to play again? (y/n): ";
		cin >> game;
	}

}

string getResponse()
{
	ifstream inFile(R"(C:\Users\SNM00013\Desktop\CPP-2022\files\data_files)");
	string responseList[12];
	int i = 0, ranInt;

	while (getline(inFile, responseList[i]))
	{
		i++;
	}

	unsigned seed = time(0);
	srand(seed);
	ranInt = rand() % 12;

	return responseList[ranInt];

}