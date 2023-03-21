#include <iostream>
using namespace std;

// uses the indirection operator to
// display and change the value of x
int main()
{
	int x = 25;
	int* ptr = nullptr;

	ptr = &x;

	cout << "Here is the value of x, printed twice:\n";
	cout << x << endl;
	cout << *ptr << endl;

	*ptr = 100;

	cout << "Here is the value of x, printed twice:\n";
	cout << x << endl;
	cout << *ptr << endl;
	return 0;
}