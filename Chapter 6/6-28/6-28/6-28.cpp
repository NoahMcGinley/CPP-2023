#include <iostream>
#include <iomanip>
using namespace std;

void getChoice(char&);
double calcWeeklyPay(int, double);
double calcWeeklyPay(double);

/*###############################
# main accepts no arguments
# it prompts the user for hourly or salary
# calls getChoice passing selection
# process hourly pay and salary pay
# using overload functions for calcWeeklyPay
# output the pay
################################*/
int main()
{
	// Declares variables and sets formatting
	char selection;
	int hours;
	double rate, yearly;
	cout << fixed << showpoint << setprecision(2);

	// Output the menu
	cout << "Do you want to calculate the weekly pay of an hourly\n"
		<< "paid employee or the monthly pay of a salary paid employee?\n";
	cout << "> ";

	// call getChoice to take input
	getChoice(selection);

	// Process the menu selection
	switch (selection)
	{
		// Hourly Employee
	case 'H':
	case 'h': cout << "How many hors were worked: ";
		cin >> hours;
		cout << "What is the hourly pay rate: ";
		cin >> rate;
		cout << "The gross weekly pay is $";
		cout << calcWeeklyPay(hours, rate) << endl;
		break;
	case 'S':
	case 's': cout << "What is the yearly(annual) salary: ";
		cin >> yearly;
		cout << "The gross weekly pay is $";
		cout << calcWeeklyPay(yearly) << endl;
		break;
	}
	return 0;
}

/*###############################
# getChoice accepts a char argument
# promp the user to enter either h
# for hourly or s for salary
################################*/
void getChoice(char &choice)
{
	cout << "Enter your choice.\n";
	cout << "(H/S)> ";
	cin >> choice;
}

/*###############################
# calcWeeklyPay is an overload function
# this function accepts an integer for
# hours worked and a double for pay rate
# it returns the weekly salary
################################*/
double calcWeeklyPay(int hours, double payRate)
{
	return hours * payRate;
}

/*###############################
# calcWeeklyPay is an overload function
# this function accepts a double for pay rate
# it returns the weekly salary
################################*/
double calcWeeklyPay(double annualSalary)
{
	return annualSalary / 52;
}