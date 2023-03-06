#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

// Prototype functions
void displayLowest(vector<double>);
void displayHighest(vector<double>);
void averageMonths(vector<double>);
string determineMonth(int);
string determineMonth2(int);

/*-----------------------------------
# gasPrices() accepts no arguments
# it reads from 1994_Weekly_Gas_Averages.txt
# and calls displayLowest() and display(Highest)
# for both values.
--------------------------------------*/
void gasPrices()
{
	// Declares and initializes variables
	ifstream inFile(R"(C:\Users\SNM00013\Desktop\CPP-2022\files\data_files\1994_Weekly_Gas_Averages.txt)");
	vector<double> priceList;
	int i = 0;
	double price;

	// Puts contents into vector
	while (inFile >> price)
	{
		priceList.push_back(price);
	}

	displayLowest(priceList);
	displayHighest(priceList);
	averageMonths(priceList);

	inFile.close();

	cout << "\n\n";
}


/*-----------------------------------
# displayLowest() accepts vector priceList
# it determines the lowest price for the given weeks
--------------------------------------*/
void displayLowest(vector<double> priceList)
{
	// Initializes variables
	int weekCount = 1, weekNum{};
	double lowest = 10;

	// Loops through vector to determine lowest value and counts the weeks
	for (double price : priceList)
	{
		if (price < lowest)
		{
			lowest = price;
			weekNum = weekCount;
		}
		weekCount++;
	}

	// gets month
	string month = determineMonth(weekNum);

	// Outputs price, week, month
	cout << "The lowest price is " << lowest << " which is in week " << weekNum << " in " << month << endl;
}


/*-----------------------------------
# displayHighest() accepts vector priceList
# it determines the lowest price for the given weeks
--------------------------------------*/
void displayHighest(vector<double> priceList)
{
	// Initializes variables
	int weekCount = 1, weekNum{};
	double highest = 0;

	// Loops through vector to determine lowest value and counts the weeks
	for (double price : priceList)
	{
		if (price > highest)
		{
			highest = price;
			weekNum = weekCount;
			
		}
		weekCount++;
	}

	// gets month
	string month = determineMonth(weekNum);

	// Outputs price, week, month
	cout << "The Highest price is " << highest << " which is in week " << weekNum << " in " << month << endl;
}


/*-----------------------------------
# averageMonths() accepts vector priceList
# it calculates the averages for all the months
--------------------------------------*/
void averageMonths(vector<double> priceList)
{
	// Decalares and initializes variables
	int i2 = 0;
	int monthCount = 1;

	// Loops through months
	for (int i = 0; i < 12; i++)
	{
		int weekNum = 1;
		double total = 0, average;

		// Loops for the amount of weeks in the current month
		while (true)
		{
			total += priceList[i2];
			double weekCount = weekNum / 4.4;
			if (weekCount > 1)
			{
				break;
			}
			weekNum++;
			i2++;
		}

		// Calculates and outputs average
		average = (total / weekNum);
		cout << "The average for " << determineMonth2(monthCount) << " is: " << average << endl;

		monthCount++;
	}
}


/*-----------------------------------
# determineMonth() accepts int weekNum
# it calculates and returns the month
# in which the week was in
--------------------------------------*/
string determineMonth(int weekNum)
{
	// Decalres and initializes variables
	int monthNum = (weekNum / 4.4) + 1;
	string month;

	// Determines month
	if (monthNum == 1)
		month = "January";
	else if (monthNum == 2)
		month = "Febuary";
	else if (monthNum == 3)
		month = "March";
	else if (monthNum == 4)
		month = "April";
	else if (monthNum == 5)
		month = "May";
	else if (monthNum == 6)
		month = "June";
	else if (monthNum == 7)
		month = "July";
	else if (monthNum == 8)
		month = "August";
	else if (monthNum == 9)
		month = "September";
	else if (monthNum == 10)
		month = "October";
	else if (monthNum == 11)
		month = "November";
	else if (monthNum == 12)
		month = "December";

	return month;
}


/*-----------------------------------
# determineMonth2() accepts int monthNum
# it calculates and returns the month
# using the month int
--------------------------------------*/
string determineMonth2(int monthNum)
{
	// Decalres and initializes variables
	string month;

	// Determines month
	if (monthNum == 1)
		month = "January";
	else if (monthNum == 2)
		month = "Febuary";
	else if (monthNum == 3)
		month = "March";
	else if (monthNum == 4)
		month = "April";
	else if (monthNum == 5)
		month = "May";
	else if (monthNum == 6)
		month = "June";
	else if (monthNum == 7)
		month = "July";
	else if (monthNum == 8)
		month = "August";
	else if (monthNum == 9)
		month = "September";
	else if (monthNum == 10)
		month = "October";
	else if (monthNum == 11)
		month = "November";
	else if (monthNum == 12)
		month = "December";

	return month;
}