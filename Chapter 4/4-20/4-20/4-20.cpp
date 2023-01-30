#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	// Defines variables
	char input;

	// Takes input
	cout << "Enter a character: ";
	cin >> input;

	if (int(input) >= 48 && int(input) <= 57)
	{
		cout << "It is an integer";
	}
	else if (int(input) >= 65 && int(input) <= 90)
	{
		cout << "It is an uppercase letter";
	}
	else if (int(input) >= 97 && int(input) <= 122)
	{
		cout << "It is a lowercase letter";
	}

	return 0;
}