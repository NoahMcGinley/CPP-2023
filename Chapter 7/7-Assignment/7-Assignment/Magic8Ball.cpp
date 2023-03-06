#include <iostream>
#include <fstream>
#include <string>
using namespace std;

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
	string response, input;
	char ch;

	while (tolower(game) == 'y')
	{
		// Takes question from user
		cin.ignore();
		cout << "What is your question?: ";
		getline(cin, input);

		// Calls getResponse() to collect a random response from 8_ball_responses.txt
		response = getResponse();

		// Outputs response and determines if the game is to be played again
		cout << response << endl;
		cout << "Would you like to play again? (y/n): ";
		cin >> game;
		cout << endl;
	}

}

/*-------------------------------------
# getResponse() accepts no arguments
# it reads from a file and randomly selects
# a response to return
--------------------------------------*/
string getResponse()
{
	// Variables and files
	ifstream inFile(R"(C:\Users\SNM00013\Desktop\CPP-2022\files\data_files\8_ball_responses.txt)");
	string responseList[12];
	int i = 0, ranInt;

	// Validates file
	if (!inFile)
	{
		cout << "File not found.\n";
	}
	else
	{
		while (getline(inFile, responseList[i]))
		{
			i++;
		}
		inFile.close();
	}

	// Generates a random int to determine what response to return
	unsigned seed = time(0);
	srand(seed);
	ranInt = rand() % 12;

	return responseList[ranInt];

}