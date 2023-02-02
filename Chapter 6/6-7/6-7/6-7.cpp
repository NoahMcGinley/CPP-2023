
#include <iostream>
using namespace std;

void displayValue(int);

/*###########################################
# main accepts no arguments
# it calls displayValue, passing an integer
# then outputs a simple success message
#############################################*/
int main()
{
	// Display a message and passes integer to displayValue
	cout << "Passing the value 5 to displayValue\n\n";
	displayValue(5);
	displayValue(4);
	displayValue(3);
	displayValue(2);
	displayValue(1);
	return 0;
}

/*#################################################
# displayValue accepts an int argument num
# it outputs a simple message and
# the value of num
###################################################*/
void displayValue(int num)
{
	cout << "displayValue received the integer " << num << " as an argument\n";
}
