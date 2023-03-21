#include <iostream>
using namespace std;

// Initializes x with the value of 25
// and outputs the memory location, size, and
// value stored in x
int main()
{
	int x = 25;

	cout << "The variable x is stored at: " << &x << endl;
	cout << "The size of variable x is: " << sizeof(x) << endl;
	cout << "The value stored in x is: " << x << endl;

	return 0;
}