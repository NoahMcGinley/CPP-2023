#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	/* Program 4-25
	Accepts no arguments
	Prompts the user for the model of a TV and outputs the model
	features, tiered with the top model having all features.*/

	int input;

	cout << "Out TVs come in three models: The 100, 200, and 300,"
		"Which model do you want to see features for\n? ";
	cin >> input;

	cout << "That model has the following features\n";
	switch(input)
	{
	case 300: cout << "Pictures-in-a-picture\n";
	case 200: cout << "Stereo sound\n";
	case 100: cout << "Remote control\n";
		break;
	default: cout << "Invalid choice";

		return 0;
	}


}

