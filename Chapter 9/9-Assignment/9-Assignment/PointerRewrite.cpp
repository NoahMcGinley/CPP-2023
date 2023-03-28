#include <iostream>
using namespace std;

int something(int*, int*);

/*----------------------------------------
# pointerRewrite accepts no arguments
# It asks the user to enter two values
# it then calls something() to multiply
# the values by 10 and return the sum
# of the two values, it then outputs the result
------------------------------------------*/
void pointerRewrite()
{
	// Declares variables
	int num1, num2;

	// Gets two numbers from user
	cout << "Enter two values to multiply by ten and add together\n";
	cout << "#1: ";
	cin >> num1;
	cout << "#2: ";
	cin >> num2;

	// Initializes pointers and calls something()
	int *num1Ptr = &num1, *num2Ptr = &num2;
	int total = something(num1Ptr, num2Ptr);

	// Outputs sum
	cout << "The result is " << total << "\n\n";
}

/*-------------------------------------
# something accepts *int and *int
# It multiplys the values by ten and returns
# the sum of the values
---------------------------------------*/
int something(int *x, int *y)
{
	int temp = *x;
	*x = *y * 10;
	*y = temp * 10;
	return *x + *y;
}
