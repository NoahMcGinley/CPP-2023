#include <iostream>
using namespace std;

int main()
{
	/* Program 5-4
	accepts no arguments*/

	const float MAX_TEMP = 102.5;
	float temp;
	char key;

	cout << "Enter the substance temperature in Celsius: ";
	cin >> temp;

	while (temp > MAX_TEMP)
	{
		cout << "The temperature is too high! Turn the thermostat down\n"
			<< "and check the temperature again in 5 minutes.";
		cout << "\nPress any key to record the temp again.";
		cin.ignore();
		cin.get();
		cout << "\nEnter the substance temperature in Celsius: ";
		cin >> temp;

	}
}
