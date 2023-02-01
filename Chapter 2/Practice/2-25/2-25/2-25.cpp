
#include <iostream>
using namespace std;

int main()
{
	// Initialize Variables
	int seconds;
	seconds = 125;

	int minutes;
	minutes = seconds / 60;

	int oSeconds;
	oSeconds = seconds % 60;

	// Output
	cout << "In 125 seconds there are:\n";
	cout << "Minutes: " << minutes << endl;
	cout << "Seconds: " << oSeconds << endl;

	return 0;
}