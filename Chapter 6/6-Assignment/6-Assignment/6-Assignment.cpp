#include <iomanip>
#include <iostream>
using namespace std;

void lowestScoreDrop();
//void overloadedHospital();
//void population();
//void rpsls();



/*########################
# Exercise 103 - Exercise menu
# main accepts no arguments
# displays menu and calls
# function chosen by the user
##########################*/
int main()
{
	// Declares variables and outputs menu
	int choice;

	// Prompts and loops menu
	do
	{
		cout << "\n\n1. Exercise #11 - Lowest Score Drop\n"
			<< "2. Excercise #15 Overloaded Hospital\n"
			<< "3. Exercise #16 - Population\n"
			<< "4. Exercise #24 - Rock, Paper, Scissors, Lizard, Spock\n"
			<< "5. Quit\n"
			<< "Choose 1 exercise to run: ";
		cin >> choice;
		cout << "-------------------------------------------------\n\n";

		// Determines which function to run
		if (choice == 1)
		{
			lowestScoreDrop();
		}
		else if (choice == 2)
		{
			//overloadedHospital();
		}
		else if (choice == 3)
		{
			//population();
		}
		else if (choice == 4)
		{
			//rpsls();
		}
		else
		{
			cout << "Invalid Input.\n";
		}

	} while (choice != 5);

	

	return 0;
}

/*###########################################
# Exercise #11 - Lowest Score Drop
# lowestScoreDrop accepts no arguments
# it calculates the average of a group of
# test scores, and drops the lowest score,
# whilst calculating the average
###########################################*/
int getScore();
double calcAverage(double);
int findLowest(int);

void lowestScoreDrop()
{
	int score1 = getScore();
	int score2 = getScore();
	int score3 = getScore();
	int score4 = getScore();
	int score5 = getScore();
	
}

// accepts no arguments
// takes input and returns it
int getScore()
{
	int score;
	cout << "Enter a test score: ";
	cin >> score;
}

// accepts double total
// calculates average and returns it
double calcAverage(int score1, int score2, int score3, int score4, int score5)
{

	double average = total / 5;
	return average;

}

int findLowest(int score)
{
	int min = 10000;
	while (score < min)
	{
		min = score;
	}
}
