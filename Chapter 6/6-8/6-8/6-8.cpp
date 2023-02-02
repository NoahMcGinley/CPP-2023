
#include <iostream>
using namespace std;

void showSum(int, int, int);

/*###########################################
# main accepts no arguments
# Prompts the user for three integer values
# calls showsum, passing the integers as arguments
# Finally, it outputs a success message
#############################################*/
int main()
{
	// Declare variables
	int num1, num2, num3;

	// Get input from the user
	cout << "Enter an integer: ";
	cin >> num1;
	cout << "Enter a second integer: ";
	cin >> num2;
	cout << "Enter a third integer: ";
	cin >> num3;

	// Pass num1, num2, and num3 to showSum
	showSum(num1, num2, num3);

	// Output a sucess message
	cout << "\nSuccess, Easy Maths!\n;";
	return 0;

}

/*#################################################
# displayValue accepts an int argument num
# it outputs a simple message and
# the value of num
###################################################*/
void showSum(int value1, int value2, int value3)
{
	int total = value1 + value2 + value3;

	// Outputs the sum
	cout << "The sum of the numbers is " << total << endl;
}
