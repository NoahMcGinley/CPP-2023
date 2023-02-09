#include <iomanip>
#include <iostream>
using namespace std;

void lowestScoreDrop();
void overloadedHospital();
void population();
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
			overloadedHospital();
		}
		else if (choice == 3)
		{
			population();
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

/////////////////////////////////////////////////////////////////////////////////////////

// Prototype functions
int getScore();
double calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);
/*---------------------------------------------
# Exercise #11 - Lowest Score Drop
# lowestScoreDrop accepts no arguments
# it calculates the average of a group of
# test scores, and drops the lowest score,
# whilst calculating the average
----------------------------------------------*/
void lowestScoreDrop()
{
	// Calls getScore() to get test scores
	int score1 = getScore();
	int score2 = getScore();
	int score3 = getScore();
	int score4 = getScore();
	int score5 = getScore();

	// gets average from calcAverage()
	double average = calcAverage(score1, score2, score3, score4, score5);

	// Output
	cout << "The average for the four highest test scores is: " << average << endl;
}

// accepts no arguments
// takes input and returns it
int getScore()
{
	// Declares variables
	int score;

	// Prompts user for score, valdates score, and returns it
	cout << "Enter a test score: ";
	cin >> score;
	while (score < 0 || score > 100)
	{
		cout << "Invalid input, enter a score that is 1-100: ";
		cin >> score;
	}
	return score;
}

// accepts int score1, score2, score3, score4, score5
// calls findLowest(), calculates average and returns it
double calcAverage(int score1, int score2, int score3, int score4, int score5)
{
	// Declares variables
	int min, total;
	double average;

	// Calls findlowest() to retrieve min
	min = findLowest(score1, score2, score3, score4, score5);

	// Calculates and returns average
	total = score1 + score2 + score3 + score4 + score5 - min;
	average = total / 4;
	return average;

}

// Finds lowest value and returns it as min
int findLowest(int score1, int score2, int score3, int score4, int score5)
{
	int& min = score1;
	if (score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5)
	{
		min = score1;
	}
	else if (score2 < score1 && score2 < score3 && score2 < score4 && score2 < score5)
	{
		min = score2;
	}
	else if (score3 < score2 && score3 < score1 && score3 < score4 && score1 < score5)
	{
		min = score3;
	}
	else if (score4 < score2 && score4 < score3 && score4 < score1 && score1 < score5)
	{
		min = score4;
	}
	else if (score5 < score2 && score5 < score3 && score5 < score4 && score5 < score1)
	{
		min = score5;
	}
	return min;
}

int calculateCharges()
{
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////

// Prototype functions
int calculateCharges(int, int, int, int);
int calculateCharges(int, int);

/*--------------------------------------
# Excercise #15 Overloaded Hospital
# accepts no arguments
# calculates and displays fora a patients
# hospital stay using overloaded functions
----------------------------------------*/
void overloadedHospital()
{
	// Declares variables
	char status;
	int days, rate, meds, services, totalCharge;

	// Input for i/o
	cout << "Are you an inpatient or an outpatient (i/o): ";
	cin >> status;
	status = tolower(status);

	// Validates input
	while (!(status == 'i' || status == 'o'))
	{
		cout << "Enter 'i' for inpatient and 'o' for outpation";
		cin >> status;
	}

	// Determines inpatient/outpatient
	if (status == 'i')
	{
		// Input for costs
		cout << "\nHow many days did you spend in the hospital?: ";
		cin >> days;
		while (days < 0)
		{
			cout << "Enter a non negative number of days: ";
			cin >> days;
		}
		cout << "What is the daily rate for the hospital stay?: ";
		cin >> rate;
		while (rate < 0)
		{
			cout << "Enter a non negative number of days: ";
			cin >> rate;
		}
		cout << "What are the total charges for medications?: ";
		cin >> meds;
		while (meds < 0)
		{
			cout << "Enter a non negative number of days: ";
			cin >> meds;
		}
		cout << "What are the total charges for the hospital services?: ";
		cin >> services;
		while (services < 0)
		{
			cout << "Enter a non negative number of days: ";
			cin >> services;
		}

		// Calls calculateCharges to retrieve the total charge for an inpatient
		totalCharge = calculateCharges(days, rate, meds, services);
	}
	else
	{
		// Input for costs
		cout << "\nWhat are the total charges for the hospital services?: ";
		cin >> services;
		while (services < 0)
		{
			cout << "Enter a non negative number of days: ";
			cin >> services;
		}
		cout << "What are the total charges for medications?: ";
		cin >> meds;
		while (meds < 0)
		{
			cout << "Enter a non negative number of days: ";
			cin >> meds;
		}

		// Calls calculateCharges to retrieve the total charge for an outpatient
		totalCharge = calculateCharges(services, meds);
	}

	// Output
	cout << "Your total charges are $" << totalCharge << endl;
}

// accepts int days, rate, meds, services
// Calculates for inpatient
// Calculates and returns the total cost of the stay
int calculateCharges(int days, int rate, int meds, int services)
{
	int totalCharge = (days * rate) + meds + services;
	return totalCharge;
}

// accepts int services, meds
// Calculates for outpatient
// Calculates and returns the total cost of the stay
int calculateCharges(int services, int meds)
{
	int totalCharge = services + meds;
	return totalCharge;
}

/////////////////////////////////////////////////////////////////////////////////////////

// Prototype functions
int calcPopulation(int, int, int);

/*------------------------------------
# Exercise #16 - Population
# accepts no arguments
# takes input from user to calculate
# the population
--------------------------------------*/
void population()
{
	// Declares variables
	int years;
	long double birthR, deathR;
	long double pop;
	
	// User input
	cout << "How many years should be calculates?: ";
	cin >> years;
	cout << "What is the starting size of the population?: ";
	cin >> pop;
	cout << "What is the annual birth rate?: ";
	cin >> birthR;
	cout << "What is the annual death rate?: ";
	cin >> deathR;

	birthR /= 1000;
	deathR /= 1000;

	for (int i = 1; i <= years; i++)
	{
		pop = calcPopulation(pop, birthR, deathR);
		cout << pop << endl;
	}

	// Calls calcPopulation() to calculate population from year to year

}

int calcPopulation(int pop, int birthR, int deathR)
{
	long double newPop = pop + (pop * birthR) - (pop * deathR);
	return newPop;
}