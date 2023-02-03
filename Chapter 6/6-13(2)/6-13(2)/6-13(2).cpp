#include <iomanip>
#include <iostream>
using namespace std;

int getCups();
double cupsToOunces(int);
void showIntro();


/*#####################################
# main accepts no arguments
# it calls showIntro, getCups, and cupsToOunces(cups)
# then outputs a message with the cups to ounces conversion
############################################*/
int main()
{
	int cups;
	double flOunces;

	showIntro();
	cups = getCups();
	flOunces = cupsToOunces(cups);

	cout << flOunces << " total fluid ounces.";
	return 0;
}

/*#####################################
# main accepts no arguments
# it calls showIntro, getCups, and cupsToOunces(cups)
# then outputs a message with the cups to ounces conversion
############################################*/
void showIntro()
{
	cout << "This program converts a measurement in cups\n"
		<< "to fluid ounces. For your reference the formula is:\n"
		<< "1 cup = 8 fluid ounces\n\n";
}

int getCups()
{
	int cups;
	cout << "Enter the amount of cups: ";
	cin >> cups;
	return cups;
}

double cupsToOunces(int cups)
{
	return cups * 8;
}