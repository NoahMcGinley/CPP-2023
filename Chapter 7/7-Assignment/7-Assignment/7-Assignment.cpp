#include <fstream>
#include <iostream>
#include <string>
using namespace std;

// Prototype functions
void gradeBook();
void worldSeries();
//void ticTacToe();
//void magic8Ball();

/*--------------------
# main accepts no arguments
# serves as the menu for the
# different exercises and calls
# the corresponding function depending
# on the users choice
----------------------*/
int main()
{
	// Declares variables
	int choice;

	do
	{
		cout << "Welcome to the exercise menu! Enter a choice 1 - 5\n"
			<< "1. Exercise #12 - Grade Book\n"
			<< "2. Exercise 16 - World Series Champions\n"
			<< "3. Exercise #18 - Tic-Tac-Toe\n"
			<< "4. Exercise #19 - Magic 8 Ball\n"
			<< "5. Exit Program\n"
			<< "choice: ";
		cin >> choice;

		cout << "----------------------------------------------\n\n";

		switch (choice)
		{
		case 1:
			gradeBook();
			break;
		case 2:
			worldSeries(); 
			break;
		case 3:
			//ticTacToe();
			break;
		case 4:
			//magic8Ball();
			break;
		case 5:
			cout << "Exited Program\n";
			break;
		default:
			cout << "Invalid input, enter a number 1-5\n";
		}

	} while (choice != 5);
	
	

	return 0;
}

////////////////////////////////////////////////////////////////////////////

// Prototype functions
char getLetterGrade(double);

/*----------------------------
# gradeBook() accepts no arguments
# It takes input for 5 test scores
# for 5 different student and
# calculates the average and assigns
# it to a letter grade
------------------------------*/
void gradeBook()
{
	// Declares variables and arrays
	const int SIZE = 5;
	string names[SIZE];
	double scores1[SIZE],
		scores2[SIZE],
		scores3[SIZE],
		scores4[SIZE],
		scores5[SIZE];
	char letterGrade[SIZE];
	double total = 0;
	double average = 0;

	// Loops to receive input for the names of the students
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter the name of student #" << i + 1 << ": ";
		cin >> names[i];
	}

	// Student 1's scores
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter " << names[0] << "'s test score #" << i + 1 << ": ";
		cin >> scores1[i];
		while (scores1[i] > 100 || scores1[i] < 0) // Validates input
		{
			cout << "Invalid input enter a score 1-100: ";
			cin >> scores1[i];
		}
		total += scores1[i];
	}
	// Calculates the average and gets the letter grade
	average = total / 5;
	letterGrade[0] = getLetterGrade(average);
	cout << names[0] << " scored a(n) " << letterGrade[0];
	total = 0;
	cout << "\n\n";

	// Student 2's scores
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter " << names[1] << "'s test score #" << i + 1 << ": ";
		cin >> scores2[i];
		while (scores2[i] > 100 || scores2[i] < 0) // Validates input
		{
			cout << "Invalid input enter a score 1-100: ";
			cin >> scores2[i];
		}
		total += scores2[i];
	}
	// Calculates the average and gets the letter grade
	average = total / 5;
	letterGrade[1] = getLetterGrade(average);
	cout << names[1] << " scored a(n) " << letterGrade[1];
	total = 0;
	cout << "\n\n";

	// Student 3's scores
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter " << names[2] << "'s test score #" << i + 1 << ": ";
		cin >> scores3[i];
		while (scores3[i] > 100 || scores3[i] < 0) // Validates input
		{
			cout << "Invalid input enter a score 1-100: ";
			cin >> scores3[i];
		}
		total += scores3[i];
	}
	// Calculates the average and gets the letter grade
	average = total / 5;
	letterGrade[2] = getLetterGrade(average);
	cout << names[2] << " scored a(n) " << letterGrade[2];
	total = 0;
	cout << "\n\n";

	// Student 4's scores
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter " << names[3] << "'s test score #" << i + 1 << ": ";
		cin >> scores4[i];
		while (scores4[i] > 100 || scores4[i] < 0) // Validates input
		{
			cout << "Invalid input enter a score 1-100: ";
			cin >> scores4[i];
		}
		total += scores4[i];
	}
	// Calculates the average and gets the letter grade
	average = total / 5;
	letterGrade[3] = getLetterGrade(average);
	cout << names[3] << " scored a(n) " << letterGrade[3];
	total = 0;
	cout << "\n\n";

	// Student 5's scores
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter " << names[4] << "'s test score #" << i + 1 << ": ";
		cin >> scores5[i];
		while (scores5[i] > 100 || scores5[i] < 0) // Validates input
		{
			cout << "Invalid input enter a score 1-100: ";
			cin >> scores5[i];
		}
		total += scores5[i];
	}
	// Calculates the average and gets the letter grade
	average = total / 5;
	letterGrade[4] = getLetterGrade(average);
	cout << names[4] << " scored a(n) " << letterGrade[4];
	total = 0;
	cout << "\n\n\n";

}

// getLetterGrade accepts double average and int i
// It determines the student's overall letter grade
// and returns it
char getLetterGrade(double average)
{
	if (average >= 90)
		return 'A';
	else if (average >= 80)
		return 'B';
	else if (average >= 70)
		return 'C';
	else if (average >= 60)
		return 'D';
	else
		return 'F';
}

////////////////////////////////////////////////////////////////////////////

/*-------------------------------
# worldSeries() accepts no arguments
# it reads from Teams.txt and WorldSeriesWinners.txt
# and asks the user to enter a team. It then outputs
# how many times that team has won the world series
-----------------------------------*/
void worldSeries()
{
	string teamList[29], team;
	ifstream inFileTeams(R"(C:\Users\SNM00013\Desktop\CPP-2022\files\data_files\Teams.txt)");
	ifstream inFileWinners(R"(C:\Users\SNM00013\Desktop\CPP-2022\files\data_files\WorldSeriesWinners.txt)");

	for (int i = 1; i <= 29; i++)
	{
		getline(cin, team);
		cout << team << endl;
	}
}