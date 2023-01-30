#include <iostream>
#include <string>
using namespace std;

int main()
{
	/* Password checker
	accepts to arguments
	prompts the user to enter the password
	display a message if it's correct
	continue prompting if it's inncorrect*/

	const string PASSWORD = "tigernation";
	string userPW;

		// prompt the user for a password
	cout << "Please enter your password: \n"
		<< ":>";
	cin >> userPW;

	// Validates the password
	// Uses while loop to continue
	// Prompting until the password is valid
	while (PASSWORD != userPW)
	{
		cout << "Please enter your password: \n"
			<< ":>";
		cin >> userPW;
	}

	cout << "\nAccess granted\n";

	return 0;
}
